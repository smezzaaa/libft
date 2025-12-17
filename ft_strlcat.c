/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 11:25:33 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 11:16:56 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (src[i] != '\0' && (dstlen + i + 1 < size))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/* 
int	main()
{
	char str[] = "lorem ipsum dolor sit amet";
	char dest1[15];
	dest1[14] = 'a';
	char dest2[15];
	dest2[14] = 'a';
	// size_t size = sizeof(dest);
	// size_t size2 = sizeof(dest2);
	// dest[14] = 'a';
	// dest2[14] = 'a';
	// printf("size = %zu, size2 = %zu\n", size, size2);
	printf ("%zu\n%s\n", ft_strlcat(dest1, str, 15), dest1);
	printf ("%zu\n%s\n", strlcat(dest2, str, 15), dest2);
} */