/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:52:46 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/18 16:24:17 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	af(void *content)
{
	int i = 0;
	char *str = (char *)content;

	while(str[i])
	{
		str[i] = ft_tolower((unsigned char) str[i]);
		i++;
	}
} */
/* 
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
	t_list *nontesta;

	t_list *nodo1;
	nontesta = ft_lstnew(ft_strdup("FFFFFFFFFFFFFF"));
	nodo1 = ft_lstnew(ft_strdup("AAAAAAAAAAAAAAAAAAA"));

	nontesta->next = nodo1;
	nodo1->next = NULL;

	printlst(nontesta);
	ft_lstiter(nontesta, af);
	printlst(nontesta);
} */