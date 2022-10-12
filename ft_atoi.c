/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:50:55 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/09/19 17:50:55 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	toreturn;
	int				negative;

	toreturn = 0;
	negative = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			negative *= -1;
	while (*str >= '0' && *str <= '9')
		toreturn = toreturn * 10 + (*(str++) - '0');
	return (toreturn * negative);
}
