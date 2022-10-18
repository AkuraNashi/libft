/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:20:35 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/18 16:27:46 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	putnbr(char *s, unsigned int i, unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (n > 9)
		putnbr(s, i - 1, n / 10);
	s[i] = nb % 10 + '0';
}

int	count_char(unsigned int n, int negative)
{
	int	count;

	count = 1;
	if (negative < 0)
		count++;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;
	int		negative;

	negative = 1;
	if (n < 0)
		negative *= -1;
	i = count_char(n * negative, negative);
	c = ft_calloc((i + 1), sizeof(char));
	if (!c)
		return (0);
	if (n < 0)
	{
		c[0] = '-';
		putnbr(c, i - 1, n * negative);
	}
	else
		putnbr(c, i - 1, n);
	return (c);
}
