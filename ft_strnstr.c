/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:48:18 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/01 21:19:46 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	f_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len != 0)
	{
		while (i < (len - 1) && big[i])
		{
			j = 0;
			while ((big[i + j] == little[j]) && little[j])
				j++;
			if (j == f_strlen(little))
				return ((char *)big + i);
			i++;
		}
	}
	return (0);
}
/* 
int main()
{
	char big[] = "1234567890";
	char small[] = "890";
	size_t	len = 0;
	printf ("%s\n",ft_strnstr(big, small, len));
	printf ("%s\n",strnstr(big, small, len));
} */