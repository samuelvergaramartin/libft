/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 09:37:58 by samuver           #+#    #+#             */
/*   Updated: 2026/11/19 09:42:09 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list			**pointer;

	if (lst == NULL)
		return (NULL);
	pointer = &lst;
	while (pointer[0]->next != NULL)
		pointer = &pointer[0]->next;
	return (pointer[0]);
}
