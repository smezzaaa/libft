/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 15:31:24 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/30 23:07:01 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	x;
	char	*str;

	str = (char *)s;
	x = (char)c;
	i = 0;
	while (str[i] != x && str[i] != '\0')
		i++;
	if (str[i] != x)
		return (0);
	return (str + i);
}
/* 
int	main()
{
	char	str1[] = "123456";
	char	str2[] = "123456";
	int	c = '\0';
	printf ("%s\n", ft_strchr(str1, c));
	printf ("%s\n", strchr(str2, c));
} */