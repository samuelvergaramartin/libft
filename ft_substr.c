/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samuver <samuver@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 19:58:20 by samuver           #+#    #+#             */
/*   Updated: 2026/11/20 12:53:21 by samuver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	if (!s)
		return (NULL);
	i = start;
	if (len + 1 > (ft_strlen(s) - start) + 1)
		len = (ft_strlen(s) - start);
	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_bzero(result, len + 1);
	while (i < (start + len) && s[i])
	{
		result[i - start] = s[i];
		i++;
	}
	result[i - start] = 0;
	return (result);
}
