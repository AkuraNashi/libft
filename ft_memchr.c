/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 05:15:43 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/09/19 05:15:43 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n)
	{
		if ((char)c == ((char *)s)[i])
			return ((unsigned char *)s + i);
		i++;
	}
	return (0);
}
