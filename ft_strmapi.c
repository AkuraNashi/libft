/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:28:09 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/18 22:48:01 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s1, char (*fct)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!s1 || !fct)
		return (0);
	s2 = malloc ((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return (0);
	i = 0;
	while (s1[i])
	{
		s2[i] = fct(i, s1[i]);
		i++;
	}
	s2[i] = 0;
	return (s2);
}
