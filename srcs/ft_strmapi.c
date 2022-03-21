/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 19:27:46 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/17 19:39:10 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (str == NULL)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(str));
	new_str = (char *)calloc(ft_strlen(str) + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = f(i, str[i]);
		i++;
	}
	return (new_str);
}

// char f(unsigned int index, char c)
// {
// 	if (index % 2 == 0)
// 		return ('!');
// 	else
// 		return (c);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("0123456789", &f));
// 	return (0);
// }
