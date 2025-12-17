/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 16:40:40 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 20:26:10 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fzero(void)
{
	char	*s;

	s = (char *)malloc(2 * sizeof(char));
	if (!s)
		return (NULL);
	s[0] = '0';
	s[2] = 0;
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
	
	if (n == 0)
		return (fzero());
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
	if (!str)
		return (NULL);
	str = conversion (x, str, (count - 1));
	return (str);
}
/* 
int	main()
{
	long int	n = -1;
	char *str = ft_itoa(n);
	printf ("%s\n", str);
	free (str);
} */