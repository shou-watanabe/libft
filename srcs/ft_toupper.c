/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:47:36 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 13:45:24 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}

// int main(void)
// {
// 	puts("----ft_toupper------");
//     int str111 = toupper('a');
//     int str112 = ft_toupper('a');
//     printf("library: %c\n", str111);
//     printf("zisaku : %c\n", str112);
// }
