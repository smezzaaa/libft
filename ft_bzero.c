/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 09:36:23 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/27 10:18:04 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*str;
	unsigned int	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/* 
int main()
{
	char	buff[1000] = "ciao";
	printf ("buff occupato : %s\n", buff);
	size_t n = 3;
	ft_bzero(buff, n);
	printf ("buff svuotato : %s\n", buff);
}*/