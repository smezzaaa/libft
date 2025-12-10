/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:40:40 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/10 21:02:23 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_units(int res, int div, int n)
{
	int unit;

	unit = 0;
	if (n < 0)
		unit = -res + div * 10;
	else
		unit = res - div * 10;
	return (unit);
}
static char	*control_set(char	*s)
{
	if (!s)
	{
		free (s);
		return (NULL);
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		div;
	int		res;
	
	i = 0;
	div = n;
	while (div > 1 || div < -1)
	{
		div = div / 10;
		i++;
	}
	if (n < 0)
		i++;
	str = (char *)malloc((i) * sizeof(char));
	div = n;
	while (i >= 0)
	{
		res = div;
		div = div / 10;
		str[i] = (ft_units(res, div, n) + 48);
		i--;
	}
	control_set(str);
	if (n < 0)
		str[0] = '-';
	return (str);	
}
int	main()
{
	int	n = -10985678;
	char *str = ft_itoa(n);
	printf ("%s\n", str);
	free (str);
}