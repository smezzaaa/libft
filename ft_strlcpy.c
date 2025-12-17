/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 12:13:33 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 15:36:29 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst));
}

/*  
int	main()
{
	char	str[] = "";
	// char	dest2[200];
	// char	dest3[200];
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	char	*dest2;
	if (!(dest2 = (char *)malloc(sizeof(*dest2) * 15)))
		return (0);
	memset(dest, 'r', 15);
	memset(dest2, 'r', 15);
	
	size_t n = 15;
	printf("%zu\n", ft_strlcpy(dest, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest);
	printf("%zu\n", strlcpy(dest2, str, n));
	printf("str: %s\n", str);
	printf("dest: %s\n\n", dest2);
} */