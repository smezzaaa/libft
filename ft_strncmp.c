/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 21:05:40 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/30 23:08:13 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = 0;
	while (i < n && (diff == 0))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
/* 
int main()
{
	char str1[] = "1234567890";
	char str2[] = "";
	size_t	n = 4;
	printf ("%d\n",ft_strncmp(str1, str2, n));
	printf ("%d\n",strncmp(str1, str2, n));
} */