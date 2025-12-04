/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:02:34 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/04 15:16:04 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sx;
	size_t	dx;
	size_t	i;
	size_t	j;
	size_t	k;
	char	*tstr;

	sx = 0;
	dx = ft_strlen(s1);
	j = 0;
	k = ft_strlen(s1) - 1;
	while (s1 [j] && )
	{
		i = 0;
		while (set[i])
		{
			if (s1[j] == set[i])
				sx++;
			if (s1[k] == set[i])
				dx--;
			i++;
		}
		k--;
		j++;
	}
	printf("sx: %zu, dx: %zu\n", sx, dx);
	tstr = malloc (dx - sx);
	j = 0;
	while (sx < dx)
	{
		tstr[j] = s1[sx];
		j++;
		sx++;
	}
	if (tstr == NULL)
		return (NULL);
	return (tstr);
}

int main()
{
	char str[] = "popcorn";
	char set[] = "nop";
	printf ("%s\n", ft_strtrim(str, set));
}