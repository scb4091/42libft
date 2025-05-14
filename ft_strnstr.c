/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:29:35 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 16:29:35 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ind_b;
	size_t	little_len;

	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	ind_b = 0;
	while (big[ind_b] && ((ind_b + little_len) <= len))
	{
		if (ft_memcmp((big + ind_b), little, little_len) == 0)
			return ((char *)big + ind_b);
		ind_b++;
	}
	return (NULL);
}
