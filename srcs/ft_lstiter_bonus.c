/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:24:33 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 17:17:40 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Iterates the list ’lst’
 * and applies the function ’f’ on the content of each node.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void addOne(void * p)
// {
// 	++*(int*)p;
// }

// int main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("0")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("2")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("4")));
// 	ft_lstiter(new_list, addOne);
// 	while (new_list != NULL)
// 	{
// 		printf("%s\n", (char *)new_list->content);
// 		new_list = new_list->next;
// 	}

// 	return (0);
// }
