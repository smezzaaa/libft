/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:41:19 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/11 15:20:03 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	mdim;

	mdim = nmemb * size;
	mem = malloc (mdim);
	if (mdim > __SIZE_MAX__)
		return (0);
	if (size == 0 || nmemb == 0)
		return (malloc (1));
	ft_memset(mem, 0, mdim);
	return (mem);
}
/* 
int	main ()
{
	int *ptr = (int *)ft_calloc (3, sizeof(ptr));
	int *ptr1 = (int *)calloc (3, sizeof(ptr1));
	if (ptr)
	{
		printf("[%d][%d][%d]\n", ptr[0], ptr[1], ptr[2]);
		free (ptr);
		printf("[%d][%d][%d]\n", ptr1[0], ptr1[1], ptr1[2]);
		free (ptr1);
	}
} */