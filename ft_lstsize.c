/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 09:17:40 by samuver           #+#    #+#             */
/*   Updated: 2026/11/19 09:35:18 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			**pointer;

	if (lst == NULL)
		return (0);
	count = 0;
	pointer = &lst;
	while (pointer[0]->next != NULL)
	{
		pointer = &pointer[0]->next;
		count++;
	}
	return (count + 1);
}
