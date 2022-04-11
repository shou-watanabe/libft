/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:25:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 01:22:37 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int main()
// {
// 	puts("-------ft_alpha----------");
//     printf("library :%d\n", isalnum('2'));
//     printf("zisaku  :%d\n", ft_isalnum('2'));
//     printf("library :%d\n", isalnum('A'));
//     printf("zisaku  :%d\n", ft_isalnum('A'));
//     printf("library :%d\n", isalnum('/'));
//     printf("zisaku  :%d\n", ft_isalnum('/'));
// 	return (0);
// }
