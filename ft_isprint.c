/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:37:59 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:57:35 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (' ' <= c && c <= '~');
}

// int main()
// {
//     puts("-------ft_isprint----------");
//     printf("library :%d\n", isprint('2'));
//     printf("zisaku  :%d\n", ft_isprint('2'));
//     printf("library :%d\n", isprint('\t'));
//     printf("zisaku  :%d\n", ft_isprint('\t'));
//     printf("library :%d\n", isprint('\n'));
//     printf("zisaku  :%d\n", ft_isprint('\n'));
// 	return (0);
// }
