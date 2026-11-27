/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:25:12 by samuver           #+#    #+#             */
/*   Updated: 2026/11/11 09:34:08 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_pointer;
	unsigned char	*src_pointer;

	if (!dest && !src)
		return (NULL);
	i = 0;
	dest_pointer = ((unsigned char *) dest);
	src_pointer = ((unsigned char *) src);
	while (i < n)
	{
		dest_pointer[i] = src_pointer[i];
		i++;
	}
	return (dest);
}
