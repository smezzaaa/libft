/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 14:35:34 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 19:55:04 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}
/* 
void	del(void *content)
{
	free(content);
}

void	*f(void *content)
{
	char	*cpy;
	int		i;

	cpy = ft_strdup((char *)content);
	i = 0;
	while(cpy[i])
	{
		cpy[i] = ft_tolower((unsigned char)cpy[i]);
		i++;
	}
	return ((void *)cpy);
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
	t_list	*head;
	t_list	*nodo1 = NULL;
	t_list	*nodo2 = NULL;
	t_list	*nodo3 = NULL;

	nodo1 = malloc(sizeof(t_list));
	nodo2 = malloc(sizeof(t_list));
	nodo3 = malloc(sizeof(t_list));

	nodo1->content = "BOP";
	nodo2->content = "BIP";
	nodo3->content = "BUP";

	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;
	head = nodo1;

	printlst (head);
	printlst (ft_lstmap(head, f, del));
	free(nodo1);
	free(nodo2);
	free(nodo3);
} */