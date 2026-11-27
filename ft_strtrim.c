/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 10:11:16 by samuver           #+#    #+#             */
/*   Updated: 2026/11/18 11:09:23 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_ft_get_pos_1(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static	size_t	ft_ft_get_pos_2(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, s1[i]) != NULL)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	pos1;
	size_t	pos2;
	char	*result;

	if (!set[0] || !s1[0])
	{
		result = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
		if (result == NULL)
			return (NULL);
		ft_strlcpy(result, s1, ft_strlen(s1) + 1);
		return (result);
	}
	pos1 = ft_ft_get_pos_1(s1, set);
	if (pos1 == ft_strlen(s1))
		return (ft_calloc(1, 1));
	pos2 = ft_ft_get_pos_2(s1, set);
	return (ft_substr(&s1[pos1], 0, pos2 - pos1 + 1));
}
