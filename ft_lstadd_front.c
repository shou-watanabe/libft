/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:38:07 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/18 09:11:19 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node ’new’ at the beginning of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	*lst = new;
	ft_lstadd_back(lst, tmp);
}

// int	main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_front(&new_list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_front(&new_list, ft_lstnew(ft_strdup("World")));
// 	printf("%s\n", (char *)new_list->content);
// 	printf("%s\n", (char *)new_list->next->content);
// 	return (0);
// }
