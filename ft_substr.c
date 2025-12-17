/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:41:17 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 19:21:13 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	sublen;
	char	*substr;

	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc (1,1));
	if ((start + len) > ft_strlen(s))
		sublen = ft_strlen(s) - start;
	else
		sublen = len;
	substr = malloc(sublen + 1);
	if (!substr)
		return(NULL);
	while (s[start] && j < sublen)
	{
		substr[j] = s[start];
		start++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
/* 
int main()
{
	char	str[] = "blup";
	char	*substr;
	unsigned int start = 0;
	size_t len = 0;
	substr = ft_substr(str, start, len);
	printf ("%s\n", substr);
	free(substr);
} */