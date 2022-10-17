/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 01:20:44 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/17 11:02:35 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		len;
	int		start;

	len = 0;
	if (!s1[len])
		return (ft_strdup(""));
	while (s1[len] && ft_strchr(set, s1[len]))
		len++;
	if (!s1[len])
		return (ft_strdup(""));
	start = len;
	while (s1[len])
		len++;
	len--;
	while (s1[len] && ft_strchr(set, s1[len]))
		len--;
	len -= start - 1;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + start, len + 1);
	return (str);
}
