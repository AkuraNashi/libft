/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 05:53:59 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/09/19 05:53:59 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n - 1 && ((char *)s)[i] == ((char *)s2)[i])
		i++;
	return (((unsigned char *)s)[i] - ((unsigned char *)s2)[i]);
}
