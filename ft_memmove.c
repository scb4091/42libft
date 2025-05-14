/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:28:49 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 15:38:01 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			ind;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	if (dest == NULL && src == NULL && n != 0)
		return (NULL);
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (ptrd < ptrs)
	{
		ind = 0;
		while (ind < n)
		{
			ptrd[ind] = ptrs[ind];
			ind++;
		}
	}
	else
	{
		ind = n;
		while (ind--)
			ptrd[ind] = ptrs[ind];
	}
	return (dest);
}
