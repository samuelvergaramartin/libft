/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:41:04 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 19:06:39 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ft_free(void *content, t_list *list)
{
	free(content);
	ft_lstclear(&list, free);
}

static void	ft_ft_del_and_clear(void *content, t_list *l, void (*del)(void *))
{
	del(content);
	ft_lstclear(&l, del);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	void	*content;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (node == NULL)
		{
			if (!del)
				ft_ft_free(content, list);
			else
				ft_ft_del_and_clear(content, list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
