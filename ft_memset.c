/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:45:02 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 01:42:29 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*bufc;
	size_t			i;

	bufc = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		bufc[i] = (unsigned char)c;
		i++;
	}
	return (bufc);
}

// int main(void)
// {
// 	puts("-----------ft_memset-------------");
// 	// crush test
// 	// ft_memset(NULL, 'a', 10);
// 	// memset(NULL, 'a', 10);
// 	char str01[] = "0123456789";
// 	char str02[] = "0123456789";
//     ft_memset(str01 + 2, '*', 5);
//     memset(str02 + 2, '*', 5);
//     printf("zisaku  : %s\n", str01);
//     printf("library : %s\n", str02);
//     char *str03;
//     char *str04;

//     if (!(str03 = (char *)malloc(sizeof(char) * 10)))
//         return (0);
//     if (!(str04 = (char *)malloc(sizeof(char) * 10)))
//         return (0);

//     memset(str03, 'a', 10);
//     ft_memset(str04, 'a', 10);
//     for (int i = 0; i < 15; i++)
//     {
//         printf("library %d : %c\n", i, str03[i]);
//         printf("zisaku  %d : %c\n", i,str04[i]);
//     }
// 	return (0);
// }
