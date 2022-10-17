/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:37:34 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/17 10:50:55 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	putnbr(unsigned int n, int fd)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		putnbr(n / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	negative;

	negative = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		negative *= -1;
	}
	putnbr(n * negative, fd);
}
