/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 02:26:39 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/08/16 02:26:39 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize)
	{	
		while (i < destsize - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (ft_strlen(src));
}
