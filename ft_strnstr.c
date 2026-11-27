/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:14:02 by samuver           #+#    #+#             */
/*   Updated: 2026/11/16 08:18:02 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_ft_get_result(const char *b, const char *l, size_t i, size_t p)
{
	if (!ft_strlen(l))
		return ((char *)b);
	if (ft_strlen(l) != i)
		return (NULL);
	return ((char *)&b[p]);
}

static void	ft_ft_increment(int matches, size_t *i, size_t *i2)
{
	if (matches)
		*i2 = *i2 + 1;
	*i = *i + 1;
}

static void	ft_ft_reset(int *matches, size_t *pos, size_t *i2, size_t *i)
{
	*matches = 0;
	*i = *pos;
	*pos = 0;
	*i2 = 0;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	pos;
	int		matches;

	i = 0;
	i2 = 0;
	matches = 0;
	pos = 0;
	if (len == i - 1)
		len = ft_strlen(big) + 1;
	while (i < len && big[i] && little[i2])
	{
		if (big[i] == little[i2] && !matches)
		{
			matches = 1;
			pos = i;
		}
		if (big[i] != little[i2] && matches)
			ft_ft_reset(&matches, &pos, &i2, &i);
		ft_ft_increment(matches, &i, &i2);
	}
	return (ft_ft_get_result(big, little, i2, pos));
}
