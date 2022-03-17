/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:34:05 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/17 13:19:38 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	len;

	if (s1 == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	printf("%zu\n", len);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	printf("%zu\n", len);
	return (ft_substr(s1, 0, len));
}

// int	main(void)
// {
// 	char	*str = "   Hello World!   ";

// 	printf("%s\n", ft_strtrim(str, " "));
// }
