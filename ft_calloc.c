/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 08:22:21 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/11 21:42:34 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	m_size;

	if (size != 0 && SIZE_MAX / size < count)
		return (NULL);
	m_size = count * size;
	if (m_size == 0)
		m_size = 1;
	p = malloc(m_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, m_size);
	return (p);
}

// int main(void)
// {
// 	size_t len = 7;
// 	char *str1 = ft_calloc(7, 3);
// 	char *str2 = calloc(7, 3);
// 	char *str = "Hello";
// 	ft_memmove(str1, str, 5);
// 	ft_memmove(str2, str, 5);
// 	size_t i = 0;
// 	while (i < len)
// 	{
// 		printf("%lu(z): %s\n", i, str1 + i);
// 		printf("%lu(l): %s\n", i, str2 + i);
// 		i++;
// 	}
// 	return (0);
// }
