/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:28:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:11:42 by shwatana         ###   ########.fr       */
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

// int main(void)
// {
// 	puts("----ft_strncmp------");
//     char str141[] = "chidoridaisuki";
//     char str142[] = "chidoridaisuki";
//     char str143[] = "chidori&nobu&daigo";
//     printf("library: %d\n", strncmp(str141, str142, 14));
//     printf("zisaku : %d\n", ft_strncmp(str141, str142, 14));
//     printf("library: %d\n", strncmp(str141, str143, 7));
//     printf("zisaku : %d\n", ft_strncmp(str141, str143, 7));
//     printf("library: %d\n", strncmp(str141, str143, 8));
//     printf("zisaku : %d\n", ft_strncmp(str141, str143, 8));
// 	return (0);
// }
