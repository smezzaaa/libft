/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:40:40 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/11 15:06:14 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*control_set(char	*s)
{
	if (!s)
	{
		free (s);
		return (NULL);
	}
	return (s);
}

static char	*conversion(long int n, char *str, long int len)
{
	long int	res;
	long int	div;
	long int	unit;

	div = n;
	res = 0;
	unit = 0;
	while (div != 0)
	{
		res = div;
		div = div / 10;
		if (n < 0)
			unit = -res + div * 10;
		else
			unit = res - div * 10;
		str[len] = (unit + 48);
		len--;
	}
	control_set(str);
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		count;
	long int		div;
	long int		x;

	count = 0;
	x = (long int)n;
	div = x;
	while (div != 0)
	{
		div = div / 10;
		count++;
	}
	if (x < 0)
		count++;
	str = (char *)malloc((count + 1) * sizeof(char));
	if (n == 0)
	{
		str[0] = '0';
		return (&str[0]);
	}
	str = conversion (x, str, (count - 1));
	return (str);
}
/* 
int	main()
{
	long int	n = 0;
	char *str = ft_itoa(n);
	printf ("%s\n", str);
	free (str);
} */