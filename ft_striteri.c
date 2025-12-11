/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 09:05:00 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/11 09:45:58 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f (i, &s[i]);
		i++;
	}
}

/* 
void	f(unsigned int i, char *add)
{
	(void) i;
	add = (add + 9);
}
int main()
{
	char	str[] = "blob";
	ft_striteri (str, f);
} */