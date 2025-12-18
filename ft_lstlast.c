/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 10:36:56 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 20:03:28 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst != NULL)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
/* 
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
	t_list	*head;
	t_list	*nodo1 = NULL;
	t_list	*nodo2 = NULL;
	t_list	*nodo3 = NULL;

	nodo1 = malloc(sizeof(t_list));
	nodo2 = malloc(sizeof(t_list));
	nodo3 = malloc(sizeof(t_list));

	nodo1->content = "bop";
	nodo2->content = "bip";
	nodo3->content = "bup";

	nodo1->next = nodo3;
	nodo2->next = NULL;
	nodo3->next = nodo2;
	head = nodo1;

	printlst (head);
	printlst (ft_lstlast(head));
	free(nodo1);
	free(nodo2);
	free(nodo3);
} */