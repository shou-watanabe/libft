/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:45 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 13:58:16 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	cchr;
	char	*find_p;
	size_t	len;
	size_t	i;

	find_p = NULL;
	cchr = (char)c;
	len = ft_strlen(str) + 1;
	i = 0;
	while (i < len)
	{
		if (str[i] == cchr)
			find_p = (char *)(str + i);
		i++;
	}
	return (find_p);
}

// int main(void)
// {
// 	puts("----ft_strrchr------");
//     char a[] = "aiueo";
//     printf("zisaku  : %s\n", ft_strrchr(a, 'a'));
//     printf("library : %s\n", strrchr(a, 'a'));
//     printf("zisaku  : %s\n", ft_strrchr(a, 'i'));
//     printf("library : %s\n", strrchr(a, 'i'));
//     printf("zisaku  : %s\n", ft_strrchr(a, 'u'));
//     printf("library : %s\n", strrchr(a, 'u'));
//     printf("zisaku  : %s\n", ft_strrchr(a, 'e'));
//     printf("library : %s\n", strrchr(a, 'e'));
//     printf("zisaku  : %s\n", ft_strrchr(a, 'o'));
//     printf("library : %s\n", strrchr(a, 'o'));
//     printf("zisaku  : %s\n", ft_strrchr(a, 0));
//     printf("library : %s\n", strrchr(a, 0));
//     printf("zisaku  : %p\n", ft_strrchr(a, 0));
//     printf("library : %p\n", strrchr(a, 0));
//     printf("zisaku  : %s\n", ft_strrchr(a, 1));
//     printf("library : %s\n", strrchr(a, 1));
//     printf("zisaku  : %s\n", ft_strrchr(a, 'z'));
//     printf("library : %s\n", strrchr(a, 'z'));
// 	return (0);
// }
