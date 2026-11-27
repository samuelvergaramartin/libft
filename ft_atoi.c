/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:52:39 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 10:09:36 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ft_check_sign(char c, int *multiplicator, size_t *i)
{
	if (c == '-' || c == '+')
	{
		if (c == '-')
			*multiplicator = *multiplicator * -1;
		*i = *i + 1;
	}
}

int	ft_atoi(const char *nptr)
{
	long long	n;
	size_t		i;
	int			multiplicator;

	n = 0;
	i = 0;
	multiplicator = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	ft_ft_check_sign(nptr[i], &multiplicator, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		n *= 10;
		n += nptr[i] - '0';
		i++;
	}
	n *= (long long)multiplicator;
	return ((int)n);
}
