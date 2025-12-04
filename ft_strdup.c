/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:45:50 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/04 15:58:24 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*arr;

	i = 0;
	if ((ft_strlen(s) + 1) > __SIZE_MAX__)
		return (NULL);
	arr = (char *)malloc (ft_strlen(s) + 1);
	while (s[i])
	{
		arr[i] = s[i];
		i++;
	}
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