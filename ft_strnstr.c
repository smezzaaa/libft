/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:48:18 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 19:59:59 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!big[i] && !little[i])
		return ((char *)big);
	if (len != 0)
	{
		while ((i) < (len) && big[i])
		{
			j = 0;
			while ((big[i + j] == little[j]) && little[j] && (i + j) < (len))
				j++;
			if (j == ft_strlen(little))
				return ((char *)big + i);
			i++;
		}
	}
	return (0);
}
/* 
int main()
{
	char big[] = "aaabcabcd";
	char small[] = "cd";
	size_t len = 8;
	printf("%s\n", ft_strnstr(big, small, len));
	printf("%s\n", strnstr(big, small, len));
} */