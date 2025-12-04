/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:14:02 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/04 11:59:09 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	newlen;
	size_t	i;
	size_t	j;
	char	*newstr;

	len1 = ft_strlen(s1);
	newlen = len1 + ft_strlen(s2);
	i = 0;
	j = 0;
	newstr = malloc (newlen);
	while (i < len1)
	{
		newstr[i] = s1[i];
		i++;
	}
	while (i < newlen)
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	if (newstr == NULL)
		return (NULL);
	return (newstr);
}
/* 
int	main()
{
	char str1[] = "uuuuu";
	char str2[] = "";
	printf ("%s\n", ft_strjoin(str1, str2));
} */