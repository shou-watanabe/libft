/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 02:19:59 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 15:00:49 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main(void)
// {
// 	puts("----bzero------");
//     char str171[] ="radwimps";
//     char str172[] ="radwimps";
//     ft_bzero(str171, 3);
//     bzero(str172, 3);
//     printf("zisaku  : %s\n", str171 + 3);
//     printf("library  : %s\n", str172 + 3);
//     printf("zisaku  : %s\n", str171 + 2);
//     printf("library  : %s\n", str172 + 2);
// }
