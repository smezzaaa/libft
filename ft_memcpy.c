/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:16:14 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/27 15:21:52 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (dest == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/* 
int	main()
{
	char str[] = "abcdefghi";
	char dest[1000];
	int n = 25;
	ft_memcpy(dest, str, n);
	printf ("%s\n", dest);
	memcpy (dest, str, n);
	printf ("%s\n", dest);
}*/