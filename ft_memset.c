/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:47:53 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/16 18:07:37 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (char)c;
		i++;
	}
	return (s);
}

/* 
int	main()
{
	char dest [2];
	size_t n = 5;
	int	c = 115;
	printf ("%s\n", (char *)ft_memset(dest, c, n));
	printf ("%s\n", (char *)memset(dest, c, n));
	
} */