/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:43:01 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/18 09:11:31 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Counts the number of nodes in a list.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// int main(void)
// {
// 	t_list	*new_list;

// 	new_list = NULL;
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("Hello")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("World")));
// 	ft_lstadd_back(&new_list, ft_lstnew(ft_strdup("42")));
// 	printf("%d\n", ft_lstsize(new_list));
// 	return (0);
// }
