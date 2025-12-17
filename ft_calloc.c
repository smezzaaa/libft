/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 18:41:19 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/17 16:30:45 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*mem;
	size_t				i;
	size_t				tot;

	tot = nmemb * size;
/* 	if (size < 0 || nmemb < 0)
		return (NULL); */
	mem = malloc(tot);
	i = 0;
	if (!mem)
		return (NULL);
	ft_bzero (mem, tot);
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