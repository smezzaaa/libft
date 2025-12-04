/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:13:33 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/28 15:23:52 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// # include <bsd/string.h>

static size_t	f_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src [i];
		i++;
	}
	dst[size] = '\0';
	return (f_strlen(src));
}
/* 
int	main()
{
	char	str[] = "bleah";
	char	dest2[200];
	char	dest3[200];
	
	size_t n = 3;
	printf("%zu\n", ft_strlcpy(dest2, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest2);
	printf("%zu\n", strlcpy(dest3, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest3);
} */