/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 19:06:06 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 09:23:04 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_pointer;
	unsigned char	*dest_pointer;

	if (!dest || !src)
		return (NULL);
	src_pointer = ((unsigned char *) src);
	dest_pointer = ((unsigned char *) dest);
	if (dest_pointer < src_pointer)
		ft_memcpy(dest, src, n);
	else
	{
		dest_pointer += n;
		src_pointer += n;
		while (n--)
			*--dest_pointer = *--src_pointer;
	}
	return (dest);
}
