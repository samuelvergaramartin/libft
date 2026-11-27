/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:13:25 by samuver           #+#    #+#             */
/*   Updated: 2026/11/09 15:25:57 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_pointer;

	temp_pointer = ((unsigned char *) s);
	i = 0;
	while (i < n)
	{
		temp_pointer[i] = c;
		i++;
	}
	return (s);
}
