/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:44:08 by scarrues          #+#    #+#             */
/*   Updated: 2025/04/16 20:51:20 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*pt;
	char	*pt_last;

	pt = (char *)s;
	pt_last = NULL;
	while (*pt)
	{
		if (*pt == (char) c)
			pt_last = pt;
		pt++;
	}
	if ((char)c == '\0')
		return (pt);
	return (pt_last);
}
