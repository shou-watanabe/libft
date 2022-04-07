/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:58:19 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:57:31 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// int main()
// {
//     puts("-------ft_isdigit----------");
//     printf("library :%d\n", isdigit('2'));
//     printf("zisaku  :%d\n", ft_isdigit('2'));
//     printf("library :%d\n", isdigit('A'));
//     printf("zisaku  :%d\n", ft_isdigit('A'));
//     printf("library :%d\n", isdigit('1'));
//     printf("zisaku  :%d\n", ft_isdigit('1'));
// 	return (0);
// }
