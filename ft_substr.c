/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:41:17 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/04 11:12:00 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	substr = malloc (len);
	while (i < start)
		i++;
	while (j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	if (substr == NULL)
		return (NULL);
	return (substr);
}
/* 
int main()
{
	char	str[] = "sassocartaforbici";
	unsigned int start = 0;
	size_t len = 5;
	printf ("%s\n", ft_substr(str, start, len));
} */