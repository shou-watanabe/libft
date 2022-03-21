/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:58:32 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/20 17:51:21 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c_lst;
	t_list	*next_lst;

	if (lst == NULL)
		return ;
	c_lst = *lst;
	while (c_lst != NULL)
	{
		next_lst = c_lst->next;
		ft_lstdelone(c_lst, del);
		c_lst = next_lst;
	}
	*lst = NULL;
}
