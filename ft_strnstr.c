/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:22:39 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 01:18:39 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t size)
{
	size_t	str_len;
	size_t	target_len;
	size_t	i;

	if (target[0] == '\0')
		return ((char *)str);
	if (size == 0)
		return (NULL);
	str_len = ft_strlen(str);
	target_len = ft_strlen(target);
	if (str_len < size)
		size = str_len;
	if (size < target_len)
		return (NULL);
	i = 0;
	while (i + target_len <= size)
	{
		if (ft_strncmp(str + i, target, target_len) == 0)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	// // crush
// 	// printf("%s\n", strnstr("222", NULL, 0));
// 	// printf("%s\n", ft_strnstr("222", NULL, 0));

// 	// // crush
// 	// printf("%s\n", strnstr(NULL, "2", 1));
// 	// printf("%s\n", ft_strnstr(NULL, "2", 1));

// 	// // not crush
// 	// printf("%s\n", strnstr(NULL, "2", 0));
// 	// printf("%s\n", ft_strnstr(NULL, "2", 0));

// 	// char *str = "Hello 42 !!!!!!";
// 	// char *target = "42";
// 	// int size = 9;
// 	// printf("%s\n", ft_strnstr(str, target, size));
// 	// printf("%s\n", strnstr(str, target, size));

// 	puts("----ft_strnstr------");
//     char str81_0[] ="nesugosita!!!";
//     char str81_1[] ="go";
//     printf("zisaku  : %s\n", ft_strnstr(str81_0, str81_1, 5));
//     printf("library : %s\n", strnstr(str81_0, str81_1, 5));
//     printf("zisaku  : %s\n", ft_strnstr(str81_0, str81_1, 6));
//     printf("library : %s\n", strnstr(str81_0, str81_1, 6));

// 	printf("%s\n", ft_strnstr("abbbcdefg", "bbc", 20));
// 	printf("%s\n", strnstr("abbbcdefg", "bbc", 20));
// }
