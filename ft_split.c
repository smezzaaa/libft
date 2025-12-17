/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:22:02 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 19:47:20 by smeza-ro         ###   ########.fr       */
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
		if (!(s[i] == 0))
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*free_word(char	*s)
{
	if (!s)
		return (NULL);
	return (s);
}

static char	*ft_cpy(char *dst, const char *str, size_t len, char c)
{
	static int	i;
	size_t		j;

	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			while (j < len)
			{
				dst[j] = str[i];
				j++;
				i++;
			}
			return (dst);
		}
		else
		{
			while (str[i] == c)
				i++;
		}
	}
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	size_t		i;
	char		**arr;
	size_t		wrd_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (str_counter(s, c)));
	if (arr == NULL)
		return (NULL);
	while (i < str_counter(s, c))
	{
		wrd_len = tok_len(s, c);
		arr[i] = (char *)malloc(wrd_len * sizeof(char));
		arr[i] = ft_cpy(arr[i], s, wrd_len, c);
		if (free_word (arr[i]) == NULL)
			return (NULL);
		i++;
	}
	return (arr);
}

int main ()
{
	char str[] = "---bip--fff------";
	char del = '-';
	char **tokens = ft_split(str, del);
	int i = 0;
	while (tokens[i])
	{
		printf("%s\n", tokens[i]);
		i++;
	}
	int a = 0;
	int j = 0;
	while (tokens[a])
	{
		while (tokens[a][j])
		{
			free (tokens[j]);
			j++;
		}
		j = 0;
		free (tokens);
		a++;
	}
}