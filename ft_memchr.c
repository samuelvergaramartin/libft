/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:28:04 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 10:00:02 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pointer;
	size_t			i;

	if (!n)
		return (NULL);
	pointer = ((unsigned char *)s);
	i = 0;
	while (i < n - 1 && pointer[i] != (unsigned char)c)
		i++;
	if (pointer[i] == (unsigned char)c)
		return (&pointer[i]);
	else
		return (NULL);
}
