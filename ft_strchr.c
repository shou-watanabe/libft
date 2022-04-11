/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:45 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 01:57:57 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	chrc;
	size_t	i;
	size_t	len;

	len = ft_strlen(str) + 1;
	i = 0;
	chrc = (char)c;
	while (i < len)
	{
		if (str[i] == chrc)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
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
