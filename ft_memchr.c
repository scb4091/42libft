/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:46:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 16:08:41 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			ind;
	unsigned char	*ptr;

	ind = 0;
	ptr = (unsigned char *)s;
	while (ind < n)
	{
		if (ptr[ind] == (unsigned char) c)
			return (ptr + ind);
		ind++;
	}
	return (NULL);
}
