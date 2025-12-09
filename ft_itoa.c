/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:40:40 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/09 20:21:55 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;
	int		res;
	int		unit;

	i = 0;
	div = n;
	while (div > 1)
	{
		div = div / 10;
		i++;
	}
	str = (char *)malloc((i) * sizeof(char));
	//str[i] = 0;
	div = n;
	if (n < 0)
	{
		str[i] = '-';
	}
	while ( != 0)
	{
		res = div;
		div = div / 10;
		unit = res - div * 10;
		str[i] = (unit + 48);
		printf ("%c\n", str[i]);
		i--;
	}
	return (str);	
}
int	main()
{
	int	n = 82345;
	printf ("%s\n", ft_itoa(n));
}