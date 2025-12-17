/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:13:33 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 16:25:04 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (ft_strlen (src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src [i];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
/*  
int	main()
{
	char	str[] = "coucou";
	char	dest2[10];
	memset(dest2, 'A', 10);
	char	dest[10];
	memset(dest, 'A', 10);
	
	size_t n = -1;
	printf("%zu\n", ft_strlcpy(dest, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest);
	printf("%zu\n", strlcpy(dest2, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest2);
} */