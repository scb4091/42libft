/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 18:51:02 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 18:51:02 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	ind;

	if (s == NULL || f == NULL)
		return ;
	ind = 0;
	while (s[ind])
	{
		f(ind, (s + ind));
		ind++;
	}
}
