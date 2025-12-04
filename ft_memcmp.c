/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:31:54 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/01 19:47:43 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				diff;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	diff = 0;
	i = 0;
	while (i < n && (diff == 0))
	{
		diff = str1[i] - str2[i];
		i++;
	}
	return (diff);
}
/* 
int	main ()
{
	char s1[] = "";
	char s2[] = "000";
	size_t n = 1;
	printf ("%d\n", ft_memcmp(s1, s2, n));
	printf ("%d\n", memcmp(s1, s2, n));
} */