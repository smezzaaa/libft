/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 22:15:47 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/16 20:08:47 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	j;
	unsigned char	*str;
	size_t			i;

	j = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == j)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (0);
}

/* 
int	main ()
{
	char str[] = "blup";
	int c = 'u';
	size_t n = 1;
	printf ("%p\n", ft_memchr(str, c, n));
	printf ("%p\n", memchr(str, c, n));
} */