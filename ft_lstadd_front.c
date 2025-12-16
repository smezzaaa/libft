/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smeza-ro <smeza-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 17:33:17 by smeza-ro          #+#    #+#             */
/*   Updated: 2025/12/16 17:46:23 by smeza-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	*lst = new;
	new->next = *lst;
}
/* 
int main()
{
	t_list	*head;
	t_list	*new;
	void	*content = "bop";
	char	*s;

	new = ft_lstnew(content);
	s = (char *)new->content;
	printf("%s\n", s);
	ft_lstadd_front(&head, new);
} */