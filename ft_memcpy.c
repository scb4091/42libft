/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:28:49 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 20:55:46 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptrd;
	const unsigned char	*ptrs;
	size_t				ind;

	if (dest == NULL && src == NULL)
		return (NULL);
	ptrd = (unsigned char *)dest;
	ptrs = (const unsigned char *)src;
	ind = 0;
	while (ind < n)
	{
		ptrd[ind] = ptrs[ind];
		ind++;
	}
	return (dest);
}
