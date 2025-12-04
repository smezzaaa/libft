/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:22:07 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/11/30 23:07:47 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	*str;

	str = (char *)s;
	i = 0;
	j = -1;
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		j = i + 1;
	if (j == -1)
		return (0);
	return (str + j);
}
/* 
int main()
{
	char str[]= "13637288";
	int	c = '5';
	printf("%s\n", ft_strrchr(str, c));
	printf("%s\n", strrchr(str, c));
} */