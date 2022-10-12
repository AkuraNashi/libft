/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:59:09 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/12 18:53:07 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;

	if (start > len)
		return ("");
	str = malloc(len + 1 * sizeof(char));
	if (!str)
		return (0);
	i = start;
	j = 0;
	while (j < len)
		str[j++] = s[i++];
	str[j] = 0;
	return (str);
}
