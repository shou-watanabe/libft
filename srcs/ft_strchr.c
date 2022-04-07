/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:45 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 11:31:11 by shwatana         ###   ########.fr       */
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
// 	char *str = "aaa\0ccccc\0ddddd";
// 	printf("%p\n", ft_strchr(str, '\0'));
// 	printf("%p\n", strchr(str, '\0'));
// 	printf("%p\n", strchr(str, 'a'));
// }
