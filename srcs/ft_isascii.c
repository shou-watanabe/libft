/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:36:14 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:58:01 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// int main()
// {
//     puts("-------ft_isascii----------");
//     printf("library :%d\n", isascii(' '));
//     printf("zisaku  :%d\n", ft_isascii('a'));
//     printf("library :%d\n", isascii('A'));
//     printf("zisaku  :%d\n", ft_isascii('A'));
//     printf("library :%d\n", isascii('1'));
//     printf("zisaku  :%d\n", ft_isascii('1'));
// 	return (0);
// }
