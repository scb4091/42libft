/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:46:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/04/24 19:40:21 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	ind;
	int		result;
	int		sign;
	char	*ptr;

	ind = 0;
	result = 0;
	sign = 1;
	ptr = ft_strtrim(nptr, " \t\v\n\r\f");
	if (ptr[ind] == '-')
	{
		sign = -1;
		ind++;
	}
	else if (ptr[ind] == '+')
		ind++;
	while (ptr[ind])
	{
		if (ft_isdigit(ptr[ind]) == 0)
			return (result * sign);
		result = (ptr[ind] - '0') + result * 10;
		ind++;
	}
	return (result * sign);
}
