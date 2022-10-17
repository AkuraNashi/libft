/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 23:13:47 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/09/27 23:13:47 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count(char const *str, char delim)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{	
		if (str[i] != delim && (str[i + 1] == delim || !str[i + 1]))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char splitter)
{
	char	**result;
	int		j;
	int		i_result;

	if (!str)
		return (0);
	result = malloc ((ft_count(str, splitter) + 1) * sizeof(char *));
	if (!result)
		return (0);
	i_result = 0;
	while (*str)
	{
		while (*str == splitter)
			str++;
		if (!*str)
			break ;
		j = 0;
		while (str[j] && str[j] != splitter)
			j++;
		result[i_result++] = ft_substr(str, 0, j);
		str += j;
	}
	result[i_result] = NULL;
	return (result);
}
