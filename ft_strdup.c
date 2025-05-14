/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:55:44 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 16:16:27 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	len_s;
	size_t	ind;
	char	*ptr;

	len_s = ft_strlen(s);
	ptr = (char *) malloc(len_s + 1);
	if (ptr == NULL)
		return (NULL);
	ind = 0;
	while (s[ind])
	{
		ptr[ind] = s[ind];
		ind++;
	}
	ptr[ind] = '\0';
	return (ptr);
}
