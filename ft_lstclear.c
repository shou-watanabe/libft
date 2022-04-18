/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:58:32 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/18 09:11:16 by shwatana         ###   ########.fr       */
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
	t_list	*clear_target_lst;
	t_list	*next_lst;

	if (lst == NULL)
		return ;
	clear_target_lst = *lst;
	while (clear_target_lst != NULL)
	{
		next_lst = clear_target_lst->next;
		ft_lstdelone(clear_target_lst, del);
		clear_target_lst = next_lst;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("World")));
// 	ft_lstclear(&new_list, free);
// 	return (0);
// }
