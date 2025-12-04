/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:25:33 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/28 15:25:15 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	tofill;

	i = 0;
	dstlen = f_strlen(dst);
	srclen = f_strlen(src);
	tofill = size - dstlen - 1;
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] != '\0' && tofill > 0)
	{
		dst[dstlen + i] = src[i];
		i++;
		tofill--;
	}
	dst[dstlen + i] = 0;
	return (dstlen + srclen);
}
/* 
int	main()
{
	char str[] = "don";
	char dest1[7] = "din";
	char dest2[7] = "din";
	size_t size = sizeof(dest1);
	printf ("%zu\n", size);
	printf ("%zu\n%s\n", ft_strlcat(dest1, str, size), dest1);
	printf ("%zu\n%s\n", strlcat(dest2, str, size), dest2);
} */