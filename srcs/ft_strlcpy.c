/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 10:37:44 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:18:37 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srclen);
}

// int main(void)
// {
// 	puts("----ft_strlcpy------");
//     char str101[] ="1234567";
//     char str102[] ="1234567";
//     char str103[] = "ABCDEFG";
//     printf("zisaku  : %zu, %s\n", ft_strlcpy(str101,str103, 0), str101);
//     printf("library : %zu, %s\n", strlcpy(str102,str103, 0), str102);
//     printf("zisaku  : %zu, %s\n", ft_strlcpy(str101,str103, 3), str101);
//     printf("library : %zu, %s\n", strlcpy(str102,str103, 3), str102);
// 	return (0);
// }
