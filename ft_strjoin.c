/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:14:02 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 17:52:04 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	newlen;
	size_t	i;
	size_t	j;
	char	*newstr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newlen = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = -1;
	j = 0;
	newstr = malloc ((newlen) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (s1[++i])
		newstr[i] = s1[i];
	while (s2[j])
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/* 
int	main()
{
	char str1[] = "";
	char str2[] = "";
	printf ("%s\n", ft_strjoin(str1, str2));
} */