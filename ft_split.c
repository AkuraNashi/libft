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

int	ft_count(char const *str, char delim)
{
	int	count;

	count = 1;
	//TODO : si string "echo-" compte comme 2 au lieu de 1
	while (*str++)
	{
		if (*str == delim)
			count++;
	}
	return (count);
}

char	**ft_split(char const *str, char splitter)
{
	char	**result;
	int		count;

	count = ft_count(str, splitter);
	printf("%d", count);
	return (result);
}

int	main(void)
{
	char *s = "test-de-mon-split";
	char **c = ft_split(s, '-');
  
	//printf("%s\n", c);
}
