/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 16:04:42 by samuver           #+#    #+#             */
/*   Updated: 2026/11/17 16:12:21 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	const int		int_limit = -2147483648;

	if (n < 0 && n != int_limit)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_ft_putchar((n % 10) + 48, fd);
	}
	else
	{
		if (n == int_limit)
			write(fd, "-2147483648", 11);
		else
			ft_ft_putchar(n + 48, fd);
	}
}
