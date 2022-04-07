/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:31:31 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:26:28 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*new_char;

	len = ft_strlen(str);
	new_char = (char *)ft_calloc(len + 1, sizeof(char));
	if (new_char == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_char[i] = str[i];
		i++;
	}
	return (new_char);
}

// int main(void)
// {
// 	puts("----ft_strdup------");
//     char str161[] ="radwimps";
//     printf("zisaku  : %s\n", ft_strdup(str161));
//     printf("library  : %s\n", strdup(str161));
// }
