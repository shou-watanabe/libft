/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:31:31 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/11 23:25:40 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		i;
	size_t		len;
	char		*new_char;

	len = ft_strlen(str);
	new_char = (char *)malloc(sizeof(char) * (len + 1));
	if (new_char == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_char[i] = str[i];
		i++;
	}
	new_char[i] = '\0';
	return (new_char);
}

// int main(void)
// {
// 	puts("----ft_strdup------");
//     char str161[] ="radwimps";
//     printf("zisaku  : %s\n", ft_strdup(str161));
//     printf("library  : %s\n", strdup(str161));
// }
