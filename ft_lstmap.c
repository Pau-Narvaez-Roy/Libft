/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 15:59:19 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/05 08:29:00 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_head;
	t_list	*lst_new;
	void	*content;

	lst_head = NULL;
	while (lst)
	{
		content = f(lst->content);
		lst_new = ft_lstnew(content);
		if (!lst_new)
		{
			del(content);
			ft_lstclear(&lst_head, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_head, lst_new);
		lst = lst->next;
	}
	return (lst_head);
}
