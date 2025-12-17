/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:45:50 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 10:00:56 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arr;

	i = 0;
	arr = (char *)malloc(ft_strlen(s) + 1);
	if (!arr)
		return (NULL);
	while (s[i])
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = 0;
	return (arr);
}
/* 
int main()
{
	char str1[] = "tututututu";
	char str2[] = "tututututu";
	printf ("%s\n", ft_strdup(str1));
	printf ("%s\n", strdup(str2));
} */