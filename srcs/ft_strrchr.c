/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:30:45 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/16 21:14:31 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	cchr;
	char	*find_p;

	find_p = NULL;
	cchr = (char)c;
	if (cchr == '\0')
		return (NULL);
	while (*str != '\0')
	{
		if (*str == cchr)
			find_p = (char *)str;
		str++;
	}
	return (find_p);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*text = "acbbcdddcdd";
// 	char	c = 'c';

// 	printf("%s\n", ft_strrchr(text, c));
// 	return (0);
// }
