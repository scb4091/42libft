/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 19:00:31 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/05 19:00:31 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	ind;

	if (!s)
		return ;
	ind = 0;
	while (s[ind])
	{
		ft_putchar_fd(s[ind], fd);
		ind++;
	}
}
