/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 11:36:40 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/09/25 11:36:40 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;

	string = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!string)
		return (0);
	ft_strlcpy(string, s, ft_strlen(s) + 1);
	return (string);
}
