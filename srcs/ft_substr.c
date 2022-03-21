/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:41:39 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/17 10:18:55 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (start > ft_strlen(str))
	{
		sub = (char *)ft_calloc(1, sizeof(char));
		if (sub == NULL)
			return (NULL);
		return (sub);
	}
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && str[start])
	{
		sub[i] = (char)str[start];
		start++;
		i++;
	}
	return (sub);
}

// int	main(void)
// {
// 	char	*str = "Hello World!";

// 	printf("%s\n", ft_substr(str, 2, 5));
// }
