/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:47:53 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/27 15:20:54 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned int	i;
	char			*str;

	str = (char *)dest;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	str[i] = 0;
	return (str);
}
/* 
int	main()
{
	//char src [] = "ciao";
	char dest [2];
	size_t n = 5;
	int	c = 118;
	printf ("%s\n", (char *)ft_memset(dest, c, n));
	printf ("%s\n", (char *)memset(dest, c, n));
	
} */