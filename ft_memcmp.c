/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 17:50:20 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 18:38:05 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ftcompare(int c1, int c2)
{
	if (c1 > c2)
		return (1);
	else
		return (-1);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_pointer;
	unsigned char	*s2_pointer;

	i = 0;
	s1_pointer = ((unsigned char *)s1);
	s2_pointer = ((unsigned char *)s2);
	while (i < n && s1_pointer[i] == s2_pointer[i])
		i++;
	if (i > 0 && i == n && s1_pointer[i - 1] != s2_pointer[i - 1])
		return (ft_ftcompare(s1_pointer[i - 1], s2_pointer[i - 1]));
	if (i == n)
		return (0);
	return (ft_ftcompare(s1_pointer[i], s2_pointer[i]));
}
