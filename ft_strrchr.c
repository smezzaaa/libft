/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:22:07 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 11:40:01 by smeza-ro         ###   ########.fr       */
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
	if (c > UCHAR_MAX)
		return(str);
	while (str[i])
	{
		if (str[i] == c)
			j = i;
		i++;
	}
	if (c == '\0')
		j = i;
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
