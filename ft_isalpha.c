/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:50:43 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 17:19:42 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	bool	is_upper_alpha;
	bool	is_lower_alpha;

	is_upper_alpha = ('A' <= c && c <= 'Z');
	is_lower_alpha = ('a' <= c && c <= 'z');
	return (is_upper_alpha || is_lower_alpha);
}

// int main()
// {
// 	puts("-------ft_alpha----------");
//     printf("library :%d\n", isalpha('2'));
//     printf("zisaku  :%d\n", ft_isalpha('2'));
//     printf("library :%d\n", isalpha('A'));
//     printf("zisaku  :%d\n", ft_isalpha('A'));
//     printf("library :%d\n", isalpha('/'));
//     printf("zisaku  :%d\n", ft_isalpha('/'));
// 	return (0);
// }
