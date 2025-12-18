/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:32:28 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 20:03:00 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
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

	nodo1 = malloc(sizeof(t_list));
	nodo2 = malloc(sizeof(t_list));

	nodo1->content = "bop";
	nodo2->content = "bip";

	nodo1->next = nodo2;
	nodo2->next = NULL;
	head = nodo1;

	printf("size = %d\n", ft_lstsize(head));
	printlst (head);
	free(nodo1);
	free(nodo2);
} */
