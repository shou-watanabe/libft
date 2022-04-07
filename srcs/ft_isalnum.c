/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:25:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:59:08 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	bool	is_upper_alpha;
	bool	is_lower_alpha;
	bool	is_digit;

	is_upper_alpha = ('A' <= c && c <= 'Z');
	is_lower_alpha = ('a' <= c && c <= 'z');
	is_digit = ('0' <= c && c <= '9');
	return (is_upper_alpha || is_lower_alpha || is_digit);
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
