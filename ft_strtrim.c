/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 01:20:44 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/13 18:39:49 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		in;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (!s1[i])
		return (strdup(""));
	in = i;
	while (s1[i])
		i++;
	i--;
	while (s1[i] && ft_strchr(set, s1[i]))
		i--;
	i -= in - 1;
	str = malloc(i + 1 * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + in, i + 1);
	return (str);
}
