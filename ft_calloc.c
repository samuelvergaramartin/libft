/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:08:51 by samuver           #+#    #+#             */
/*   Updated: 2026/11/16 08:48:37 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	unsigned char	*array;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	total = nmemb * size;
	array = malloc(total);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, total);
	return (array);
}
