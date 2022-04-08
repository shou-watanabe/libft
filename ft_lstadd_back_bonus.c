/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 23:48:11 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 17:13:26 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Adds the node ’new’ at the end of the list.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst_last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		lst_last = ft_lstlast(*lst);
		if (lst_last == NULL)
			*lst = new;
		else
			lst_last->next = new;
	}
}

// int	main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("World")));
// 	printf("%s\n", (char *)new_list->content);
// 	printf("%s\n", (char *)new_list->next->content);
// 	return (0);
// }
