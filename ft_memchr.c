/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:33:30 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 19:02:01 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cchr;
	unsigned char	*schr;
	size_t			i;

	i = 0;
	cchr = (unsigned char)c;
	schr = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (schr[i] == cchr)
			return (schr + i);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str51[] ="nesugosita!!!";
//     char str52[] ="nesugosita!!!";
//     printf("zisaku  : %s\n", (char *)ft_memchr(str51, 103, 15));
//     printf("library : %s\n", (char *)memchr(str52, 103, 15));
// 	return (0);
// }
