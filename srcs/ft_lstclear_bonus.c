/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:58:32 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 12:58:26 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Deletes and frees the given node and every successor of that node,
 * using the function ’del’ and free(3).
 * Finally, the pointer to the list must be set to NULL.
 */
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
