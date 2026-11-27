/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42malaga.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:38:15 by samuver           #+#    #+#             */
/*   Updated: 2026/11/16 09:38:36 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ft_join_s2(char *result, char c, size_t *i, size_t *i_s)
{
	result[*i] = c;
	*i = *i + 1;
	*i_s = *i_s + 1;
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_size;
	size_t	s2_size;
	size_t	i;
	size_t	i_s;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	result = malloc((s1_size + s2_size + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	i_s = 0;
	while (i < s1_size)
	{
		result[i] = s1[i];
		i++;
	}
	while (i_s < s2_size)
		ft_ft_join_s2(result, s2[i_s], &i, &i_s);
	result[i] = 0;
	return (result);
}
