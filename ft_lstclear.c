/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 12:00:08 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 20:04:20 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del ((*lst)->content);
		free(*lst);
		*lst = temp;
	}
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
			printf ("|%s|->", (char *)ptr->content);
		else
			printf ("|%s|\n", (char *)ptr->content);
		ptr = ptr->next;
	}
}

int main()
{
	t_list *testa = NULL;

	ft_lstadd_back(&testa, ft_lstnew(ft_strdup("Hello")));
	ft_lstadd_back(&testa, ft_lstnew(ft_strdup("Hello2")));
	ft_lstadd_back(&testa, ft_lstnew(ft_strdup("Hello3")));

	printlst (testa);
	ft_lstclear(&testa, del);
	printlst (testa);
	return (0);
}  */