/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 01:39:54 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 13:53:11 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}

// int main(void)
// {
//     puts("----ft_tolower------");
//     int str113 = tolower('A');
//     int str114 = ft_tolower('A');
//     printf("library: %c\n", str113);
//     printf("zisaku : %c\n", str114);
// 	return (0)
// }
