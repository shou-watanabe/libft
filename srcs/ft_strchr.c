/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:45 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 13:58:52 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	size_t	len;

	len = ft_strlen(str) + 1;
	p = (char *)ft_memchr((void *)str, c, len);
	if (p == NULL)
		return (NULL);
	return (p);
}

// int main(void)
// {
// 	puts("----ft_strchr------");
//     char str71[] ="nesugosita!!!";
//     char str72[] ="nesugosita!!!";
//     printf("zisaku  : %s\n", ft_strchr(str71, 103));
//     printf("library : %s\n", strchr(str72, 103));
//     char str73[] = "aiueo";
//     printf("zisaku  : %s\n", ft_strchr(str73, 'a'));
//     printf("library : %s\n", strchr(str73, 'a'));
//     printf("zisaku  : %s\n", ft_strchr(str73, 'i'));
//     printf("library : %s\n", strchr(str73, 'i'));
//     printf("zisaku  : %s\n", ft_strchr(str73, 'u'));
//     printf("library : %s\n", strchr(str73, 'u'));
//     printf("zisaku  : %s\n", ft_strchr(str73, 'e'));
//     printf("library : %s\n", strchr(str73, 'e'));
//     printf("zisaku  : %s\n", ft_strchr(str73, 'o'));
//     printf("library : %s\n", strchr(str73, 'o'));
//     printf("zisaku  : %s\n", ft_strchr(str73, 0));
//     printf("library : %s\n", strchr(str73, 0));
//     printf("zisaku  : %p\n", ft_strchr(str73, 0));
//     printf("library : %p\n", strchr(str73, 0));
//     printf("zisaku  : %s\n", ft_strchr(str73, 1));
//     printf("library : %s\n", strchr(str73, 1));
//     printf("zisaku  : %s\n", ft_strchr(str73, 'z'));
//     printf("library : %s\n", strchr(str73, 'z'));

// 	// char *str = "aaacccccddddd\0";
// 	// printf("%p\n", ft_strchr(str, '\0'));
// 	// printf("%p\n", strrchr(str, '\0'));
// 	// printf("%p\n", strrchr(str, 'a'));
// }
