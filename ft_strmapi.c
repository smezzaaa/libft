/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 21:04:50 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/10 21:59:30 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	(void)	i;
	return (c - 32);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int 	len;
	char			*news;

	len = 0;
	i = 0;
	if (!s)
		return(NULL);
	while (s[len])
		len++;
	news = (char *)malloc(sizeof(char) * (len + 1));
	if (!news)
		return(NULL);
	while (i < len)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news [i] = 0;
	return (news);
}
int main()
{
	char str[] = "blob";
	char	*s = ft_strmapi(str, f);
	printf ("%s\n", s);
	free(s);
}