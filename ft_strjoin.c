/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:47:21 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/12 18:55:08 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(i + 1 * sizeof(char));
	if (!str)
		return (0);
	j = 0;
	while (s1[j])
	{
		str[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j + i] = s2[i];
		i++;
	}
	str[j + i] = 0;
	return (str);
}
