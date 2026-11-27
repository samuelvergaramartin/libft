/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:10:35 by samuver           #+#    #+#             */
/*   Updated: 2026/11/13 17:03:48 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = ((unsigned char *)s1);
	us2 = ((unsigned char *)s2);
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && us1[i] && us2[i] && us1[i] == us2[i])
		i++;
	if (us1[i] != us2[i])
	{
		if (us1[i] - us2[i] > 0)
			return (1);
		return (-1);
	}
	return (0);
}
