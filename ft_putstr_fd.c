/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:43:23 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:40:44 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	len;

	if (str == NULL)
		return ;
	len = ft_strlen(str);
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