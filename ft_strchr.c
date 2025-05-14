/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:43:50 by scarrues          #+#    #+#             */
/*   Updated: 2025/04/16 20:44:41 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char	*pt;

	pt = (char *)s;
	while (*pt)
	{
		if (*pt == (char) c)
			return (pt);
		pt++;
	}
	if ((char)c == '\0')
		return (pt);
	return (NULL);
}
