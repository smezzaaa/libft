/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:02:34 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/07 17:08:48 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	control_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sx;
	size_t	dx;
	size_t	j;
	char	*tstr;

	sx = 0;
	dx = ft_strlen(s1);
	j = -1;
	while (s1[++j] && control_set(s1[j], set) != 0)
		sx++;
	j = ft_strlen(s1);
	while (s1[--j] && control_set(s1[j], set) != 0)
		dx--;
	if (dx > sx)
		tstr = malloc (dx - sx);
	else
		return (NULL);
	if (tstr == NULL)
		return (NULL);
	j = 0;
	while (sx < dx)
		tstr[j++] = s1[sx++];
	return (tstr);
}
/* 
int main()
{
	char str[] = "popcorn";
	char set[] = "popcorn";
	printf ("%s\n", ft_strtrim(str, set));
} */