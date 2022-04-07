/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:12:25 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 17:24:27 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cnt;

	if (size == 0 || ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	cnt = 0;
	while (*dst && (cnt < size - 1))
	{
		dst++;
		cnt++;
	}
	while (*src && (cnt < size - 1))
	{
		*dst++ = *src++;
		cnt++;
	}
	*dst = '\0';
	while (*src++)
		cnt++;
	return (cnt);
}

// int main(void)
// {
// 	puts("----ft_strlcat------");
//     char str151[10] ="12";
//     char str152[10] ="12";
//     char str153[] = "ABCDEFG";
//     printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 6), str151);
//     printf("library : %zu, %s\n", strlcat(str152,str153, 6), str152);
//     printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 1), str151);
//     printf("library : %zu, %s\n", strlcat(str152,str153, 1), str152);

// 	printf("---piscine---\n");
// 	char dest1[20] = "Hello, ";
// 	char dest2[20] = "Hello, ";
// 	char *str1 = "world!";
// 	char *str2 = "I'm Shun Usami. Nice to meet you.";
// 	char *arr[] = {str1, str2, ""};
// 	for (int i = 0; i < 3; i++)
// 	{
// 		char	*s = arr[i];
// 		printf("dest1=%s\ndest2=%s\ns=%s\n", dest1, dest2, s);
// 		printf("strlcat(dest1, s, 0)   		:%lu\n", strlcat(dest1, s, 0));
// 		printf("ft_strlcat(dest2, s, 0)		:%lu\n", ft_strlcat(dest2, s, 0));
// 		printf("(concatenated)dest1      	:%s\n", dest1);
// 		printf("(concatenated)dest2      	:%s\n\n", dest2);
//
// 		printf("strlcat(dest1, s, 10)   	:%lu\n", strlcat(dest1, s, 10));
// 		printf("ft_strlcat(dest2, s, 10)	:%lu\n", ft_strlcat(dest2, s, 10));
// 		printf("(concatenated)dest1      	:%s\n", dest1);
// 		printf("(concatenated)dest2      	:%s\n\n", dest2);
//
//      // norm対策で改行
// 		printf("strlcat(dest1, s, %lu)   	:%lu\n",
// 			sizeof(dest1), strlcat(dest1, s, sizeof(dest1)));
// 		printf("ft_strlcat(dest2, s, %lu)	:%lu\n",
// 			sizeof(dest2), ft_strlcat(dest2, s, sizeof(dest2)));
// 		printf("(concatenated)dest1      	:%s\n", dest1);
// 		printf("(concatenated)dest2      	:%s\n\n", dest2);
// 	}
// 	printf("[end]\n\n");
// 	return (0);
// }
