/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarrues <scarrues@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:09:53 by scarrues          #+#    #+#             */
/*   Updated: 2025/05/14 19:09:53 by scarrues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_rec(long n, int fd)
{
	int	c;

	if (n < 10)
	{
		c = '0' + n;
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd_rec(n / 10, fd);
		c = '0' + (n % 10);
		ft_putchar_fd(c, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	aux_n;

	aux_n = (long)n;
	if (aux_n < 0)
	{
		ft_putchar_fd('-', fd);
		aux_n = (-1) * aux_n;
	}
	ft_putnbr_fd_rec(aux_n, fd);
}
