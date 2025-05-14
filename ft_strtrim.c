/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:46:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 17:04:43 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ind;
	size_t	set_len;
	size_t	s1_len;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	ind = 0;
	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	while (s1[ind] && ft_memchr(set, s1[ind], set_len))
		ind++;
	start = ind;
	ind = s1_len;
	while ((ind > 0) && ft_memchr(set, s1[ind - 1], set_len))
		ind--;
	end = ind;
	return (ft_substr(s1, start, (end - start)));
}
