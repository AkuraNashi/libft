/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:20:35 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/14 21:46:11 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_char(int n)
{
	int	count;

	count = 0;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		printf("Nombre : %d\n", n);
		count++;
		n /= 10;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;

	c = malloc(100 * sizeof(char));
	if (!c)
		return (0);
	i = 0;
	while (n % 10 > 0 && n > 10)
	{
		c[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	c[i] = n % 10 + '0';
	return (c);
}

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%d\n", count_char(ft_atoi(argv[1])));
}
//1380