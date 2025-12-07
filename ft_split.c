/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:22:02 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/07 18:27:38 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	tok_len(char const *s, char c)
{
	static int	i;
	size_t		len;

	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static size_t	str_counter(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	int			k;
	size_t		j;
	char		**arr;
	size_t		wrd_len;

	i = -1;
	k = 0;
	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (str_counter(s, c)));
	if (arr == NULL)
		return (NULL);
	while ((++i) < str_counter(s, c))
	{
		wrd_len = tok_len(s, c);
		arr[i] = (char *)malloc(tok_len(s, c) * sizeof(char));
		if (arr[i] == NULL)
			return (NULL);
		j = -1;
		while ((++j) < wrd_len)
			arr[i][j] = s[j + k];
		while (s[j + (++k)] == c)
			k = (j + k);
	}
	return (arr);
}
/* 
int main ()
{
	char str[] = "bip--boppp";
	char del = '-';
	char **tokens = ft_split(str, del);
	int i = 0;
	while (tokens[i])
	{
		printf("%s\n", tokens[i]);
		i++;
	}
	free (tokens);
} */