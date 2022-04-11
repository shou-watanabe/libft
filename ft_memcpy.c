/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:10:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 01:12:01 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			i;

	if (n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dstc);
}

// int main(void)
// {
// 	char	src[] = "ww";
// 	char	dst[] = "Hello";

// 	printf("%s\n", (char *)memcpy(dst, NULL, 0));
// 	printf("%s\n", (char *)ft_memcpy(dst, NULL, 0));
// }
