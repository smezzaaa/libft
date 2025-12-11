/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 10:54:48 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/11 15:07:10 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ften(int count)
{
	long int	ten;

	ten = 1;
	while (count > 1)
	{
		ten = ten * 10;
		count--;
	}
	return (ten);
}

static int	fcounter(long int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	long int		ten;
	int				count;
	int				unit;
	long int		x;

	x = (long int)n;
	if (x < 0)
	{
		write (fd, "-", 1);
		x *= -1;
	}
	if (x == 0)
		write (fd, "0", 1);
	count = fcounter(x);
	ten = ften(count);
	while (count != 0)
	{
		unit = x / ten;
		c = (unit + 48);
		write (fd, &c, 1);
		x = x % ten;
		ten = ten / 10;
		count--;
	}
}
/* 
int main()
{
	int	n = INT_MIN;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	write (fd, "\n", 1);
} */