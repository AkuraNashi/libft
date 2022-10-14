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

int	ft_count(char const *str, char delim)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while (str[i])
	{
		printf("Lettre : %c\n", str[i]);
		printf("i : %d\n\n", i);
		if (str[i] != delim && str[i + 1] == delim && !str[i + 1])
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *str, char splitter)
{
	char	**result;
	int		count;

	count = ft_count(str, splitter);
	printf("\n%d", count);
	return (result);
}

int	main(void)
{
	char *s = "test--";
	char **c = ft_split(s, '-');
	//printf("%s\n", c);
}
