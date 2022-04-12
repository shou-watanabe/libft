/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:25:34 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 18:00:25 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (size == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (dst_p < src_p)
		ft_memcpy(dst_p, src_p, size);
	else
		while (size--)
			dst_p[size] = src_p[size];
	return (dst_p);
}

// int main(void)
// {
// 	printf("%s\n", (char *)memmove("Hello", NULL, 0));
// 	char str31[] = "abcdefghijklmnopqrstu";
// 	char str32[] = "abcdefghijklmnopqrstu";
//     ft_memmove(str31 + 5, str31, 10);
//     memmove(str32 + 5, str32, 10);
//     printf("zisaku  : %s\n", str31);
//     printf("library : %s\n", str32);

// 	return (0);
// }
