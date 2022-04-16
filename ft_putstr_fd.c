/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:43:23 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/16 13:40:39 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	size_t	len;

	if (str == NULL)
		return ;
	len = ft_strlen(str);
	while (INT_MAX < len)
	{
		write(fd, str, INT_MAX);
		str += INT_MAX;
		len -= INT_MAX;
	}
	write(fd, str, len);
}

// int main(void)
// {
// 	// ./a.out | cat -e
// 	// fd(2): Hello
//     // fd(1): Hello$
// 	ft_putstr_fd("fd(1): Hello\n", 1);
// 	ft_putstr_fd("fd(2): Hello\n", 2);
// 	return (0);
// }
