/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 11:06:11 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 20:03:51 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del (lst->content);
	free (lst);
}
/* 
void	del(void *content)
{
	free(content);
}

void	printlst(t_list *ptr)
{
	while (ptr != NULL)
	{
		if (ptr->next != NULL)
			printf ("|%s|\n", (char *)ptr->content);
		else
			printf ("|%s|\n", (char *)ptr->content);
		ptr = ptr->next;
	}
}

int main()
{
	t_list	*nodo1 = NULL;

	nodo1 = malloc(sizeof(t_list));

	nodo1->content = ft_strdup("bop");

	nodo1->next = NULL;

	printlst (nodo1);
	ft_lstdelone(nodo1, del);
	printlst (nodo1);
} */