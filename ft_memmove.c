/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:41:34 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/16 20:06:49 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*s;
	char			*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (s < d && s + n > d)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/* int	main()
{
	char str[] = "123456789";
	char dest1[6];
	char dest2[6];
	size_t n = 3;
	ft_memmove(dest1, str, n);
	printf ("%s\n", dest1);
	memmove(dest2, str, n);
	printf ("%s\n", dest2);
} */