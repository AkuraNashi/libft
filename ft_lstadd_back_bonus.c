/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:09:59 by lcamilo-          #+#    #+#             */
/*   Updated: 2022/10/18 17:56:14 by lcamilo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		ft_lstlast(*lst);
		new->next = *lst;
		*lst = new;
	}
}

void	print(t_list *list)
{
	while (list)
	{
		ft_putstr_fd(list->content, 1);
		printf("\n");
		list = list->next;
	}

}

int	main(void)
{
	t_list	*temp;

	temp = ft_lstnew("tata");
	temp = temp->next;
	temp = ft_lstnew("toto");
	temp = temp->next;
	temp = ft_lstnew("tutu");
	print(temp);
}
