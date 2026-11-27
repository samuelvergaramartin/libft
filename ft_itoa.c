/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:13:09 by samuver           #+#    #+#             */
/*   Updated: 2026/11/18 15:53:08 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_ft_get_num_len(long nb)
{
	size_t	len;

	len = 0;
	if (nb <= 0)
	{
		if (nb < 0)
			nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	i;
	char	*str_nb;

	nb = n;
	i = ft_ft_get_num_len(nb);
	str_nb = ft_calloc((i + 1), sizeof(char));
	if (str_nb == NULL)
		return (NULL);
	if (nb == 0)
		str_nb[0] = '0';
	if (nb < 0)
	{
		str_nb[0] = '-';
		nb *= -1;
	}
	str_nb[i] = 0;
	while (nb > 0)
	{
		i--;
		str_nb[i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str_nb);
}
