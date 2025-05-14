/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:46:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/12 18:23:46 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	ind;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		len = (s_len - start);
	ptr = (char *) malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ind = 0;
	while (s[start + ind] && (ind < len))
	{
		ptr[ind] = s[start + ind];
		ind++;
	}
	ptr[ind] = '\0';
	return (ptr);
}
