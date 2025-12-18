/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:41:19 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 16:56:16 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*mem;

	if (size != 0 && nmemb != 0)
	{
		if (nmemb > SIZE_MAX / size)
			return (NULL);
	}
	mem = malloc(nmemb * size);
	if (!mem)
		return (mem);
	ft_bzero (mem, (nmemb * size));
	return (mem);
}

// int	main ()
// {
// 	int *ptr = (int *)ft_calloc (-5, -4);

// 	if (ptr)
// 	{
// 		printf("[%d][%d][%d]\n", ptr[0], ptr[1], ptr[2]);
// 		free (ptr);
// 	}
// }