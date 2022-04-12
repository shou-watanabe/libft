/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:41:39 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/12 10:54:46 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	size;

	if (str == NULL)
		return (NULL);
	if (start > ft_strlen(str) || len == 0)
		return (ft_strdup(""));
	size = ft_strlen(str + start);
	if (len < size)
		size = len;
	sub = (char *)ft_calloc(size + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && str[start])
	{
		sub[i] = str[start];
		start++;
		i++;
	}
	return (sub);
}

// int main(void)
// {
// 	printf("%s\n", ft_substr("abcdefghij", 2, 0));
// 	return (0);
// }
