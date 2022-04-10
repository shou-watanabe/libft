/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:12:25 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/10 10:08:09 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	if (size == 0 || ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	len = 0;
	while (*dst && (len < size - 1))
	{
		dst++;
		len++;
	}
	while (*src && (len < size - 1))
	{
		*dst++ = *src++;
		len++;
	}
	*dst = '\0';
	while (*src++)
		len++;
	return (len);
}

// int main(void)
// {
// 	char	dst[6] = "Hello";
// 	char src[6] = "src";
// 	char	dst2[6] = "Hello";
// 	char src2[6] = "src";
// 	printf("%zu\n", strlcat(dst, src, 5));
// 	printf("%zu\n", ft_strlcat(dst2, src2, 5));
// }

// int main(void)
// {
// 	printf("%lu\n", strlcat(NULL, NULL, 0));
// 	puts("----ft_strlcat------");
// 	char str151[10] ="12";
// 	char str152[10] ="12";
// 	char str153[] = "ABCDEFG";
// 	printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 6), str151);
// 	printf("library : %zu, %s\n", strlcat(str152,str153, 6), str152);
// 	printf("zisaku  : %zu, %s\n", ft_strlcat(str151,str153, 1), str151);
// 	printf("library : %zu, %s\n", strlcat(str152,str153, 1), str152);

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

// 		printf("strlcat(dest1, s, 10)   	:%lu\n", strlcat(dest1, s, 10));
// 		printf("ft_strlcat(dest2, s, 10)	:%lu\n", ft_strlcat(dest2, s, 10));
// 		printf("(concatenated)dest1      	:%s\n", dest1);
// 		printf("(concatenated)dest2      	:%s\n\n", dest2);

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
