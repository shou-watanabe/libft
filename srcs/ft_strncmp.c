/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:28:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/16 23:32:13 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t			i;
	int				diff;
	unsigned char	*s1_p;
	unsigned char	*s2_p;

	if (size == 0)
		return (0);
	i = 0;
	s1_p = (unsigned char *)s1;
	s2_p = (unsigned char *)s2;
	diff = s1_p[i] - s2_p[i];
	while (diff == 0 && i < size)
	{
		diff = s1_p[i] - s2_p[i];
		if (s1_p[i] == '\0' || s2_p[i] == '\0')
			return (diff);
		i++;
	}
	return (diff);
}

// int	main(void)
// {
// 	printf("[ex01]\n");
// 	char str[] = "ABC";
// 	char str1[] = "ABC";
// 	char str2[] = "ABCD";
// 	char str3[] = "Z";
// 	char str4[] = "A0";
// 	char str5[] = "é";
// 	char *arr[] = {str1, str2, str3, str4, str5};
// 	for (int i = 0; i < 5; i++)
// 	{
// 		char	*s = arr[i];
// 		printf("strcnmp(%s, %s, 0)=%d, ft_strncmp(%s, %s, 0)=%d\n", str, s, strncmp(str, s, 0), str, s, ft_strncmp(str, s, 0));
// 		printf("strcnmp(%s, %s, 0)=%d, ft_strncmp(%s, %s, 0)=%d\n", str, s, strncmp(str, s, 2), str, s, ft_strncmp(str, s, 2));
// 		printf("strcnmp(%s, %s, 3)=%d, ft_strncmp(%s, %s, 3)=%d\n", str, s, strncmp(str, s, 3), str, s, ft_strncmp(str, s, 3));
// 	}
// 	printf("[end]\n\n");
// }
