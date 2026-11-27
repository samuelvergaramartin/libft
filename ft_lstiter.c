/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 10:30:15 by samuver           #+#    #+#             */
/*   Updated: 2026/11/19 12:05:15 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list			**pointer;

	if (lst != NULL && f != NULL)
	{
		pointer = &lst;
		while (pointer[0]->next != NULL)
		{
			f(pointer[0]->content);
			pointer = &pointer[0]->next;
		}
		f(pointer[0]->content);
	}
}
