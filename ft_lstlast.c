/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 11:57:29 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/18 09:07:23 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Returns the last node of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("World")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("42")));
// 	printf("%s\n", (char *)ft_lstlast(new_list)->content);
// 	return (0);
// }
