/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:21:17 by scarrues          #+#    #+#             */
/*   Updated: 2025/04/23 19:41:55 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	ind = 0;
	while (ind < n)
	{
		ptr[ind] = (unsigned char)c;
		ind++;
	}
	return (s);
}
