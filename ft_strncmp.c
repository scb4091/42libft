/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:46:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 16:31:27 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ind;
	int		r;

	ind = 0;
	while (ind < n && !(s1[ind] == '\0' && s2[ind] == '\0'))
	{
		r = (unsigned char)s1[ind] - (unsigned char)s2[ind];
		if (r != 0)
			return (r);
		ind++;
	}
	return (0);
}
