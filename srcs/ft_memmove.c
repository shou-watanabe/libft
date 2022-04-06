/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:25:34 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 17:08:50 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (dst_p < src_p)
		ft_memcpy(dst_p, src_p, size);
	else
	{
		i = size - 1;
		while (size--)
		{
			dst_p[i] = src_p[i];
			i--;
		}
	}
	return (dst_p);
}

// int main(void)
// {
//     char str31[] = "abcdefghijklmnopqrstu";
//     char str32[] = "abcdefghijklmnopqrstu";
//     ft_memmove(str31 + 5, str31, 10);
//     memmove(str32 + 5, str32, 10);
//     printf("zisaku  : %s\n", str31);
//     printf("library : %s\n", str32);

// 	char s[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
// 	char s2[] = {65, 66, 67, 68, 69, 0, 45};
// 	char s02[] = { 0,  0,  0,  0,  0,  0, 0};
// 	char sCpy2[] = {65, 66, 67, 68, 69, 0, 45};
// 	char sResult22[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult222[] = {67, 67, 68, 68, 69, 0, 45};

// 	printf("%s\n", (char *)ft_memmove(s0, s, 7));
// 	printf("%s\n", s0);
// 	printf("%d\n", memcmp(s, sCpy, 7));

// 	printf("%s\n", (char *)ft_memmove(s, s + 2, 0));

// 	// /* 1 */ check(ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7))//Post 0
// 	// /* 2 */ check(ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7)); showLeaks(); //0 move
// 	// /* 3 */ check(ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7)); showLeaks(); //forward
// 	// /* 4 */ check(ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
// 	return (0);
// }
