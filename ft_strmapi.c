/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:53:55 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 18:53:55 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s_out;
	size_t			s_len;
	unsigned int	ind;

	if (s == NULL || f == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	s_out = (char *)malloc(s_len + 1);
	if (s_out == NULL)
		return (NULL);
	ind = 0;
	while (s[ind])
	{
		s_out[ind] = f(ind, s[ind]);
		ind++;
	}
	s_out[ind] = '\0';
	return (s_out);
}
