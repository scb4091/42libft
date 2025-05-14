/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 18:40:12 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/14 18:40:12 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_itoa_len(int n)
{
	size_t	n_len;

	if (n == 0)
		return (1);
	n_len = 0;
	if (n < 0)
		n_len++;
	while (n != 0)
	{
		n = n / 10;
		n_len++;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	size_t	n_len;
	size_t	ind;
	char	*pta;
	long	aux_n;

	n_len = ft_itoa_len(n);
	pta = malloc(n_len + 1);
	if (pta == NULL)
		return (NULL);
	ind = 0;
	aux_n = (long)n;
	if (n == 0)
		pta[0] = '0';
	if (n < 0)
	{
		pta[0] = '-';
		aux_n = (-1) * aux_n;
	}
	while (aux_n > 0)
	{
		pta[n_len - 1 - ind++] = '0' + (aux_n % 10);
		aux_n = aux_n / 10;
	}
	pta[n_len] = '\0';
	return (pta);
}
