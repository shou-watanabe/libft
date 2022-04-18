/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:26:37 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/18 09:11:29 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a new node.
 * The member variable ’content’ is initialized with
 * the value of the parameter ’content’.
 * The variable ’next’ is initialized to NULL.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	new_list->next = NULL;
	new_list->content = content;
	return (new_list);
}

// int	main(void)
// {
// 	t_list	*new_list;

// 	new_list = ft_lstnew("42");
// 	printf("%s\n", (char *)new_list->content);
// 	return (0);
// }
