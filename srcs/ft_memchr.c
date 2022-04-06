/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:33:30 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 14:00:19 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	cchr;
	char	*schr;
	size_t	i;

	i = 0;
	cchr = (char)c;
	schr = (char *)s;
	while (i < n)
	{
		if (schr[i] == cchr)
			return (schr + i);
		i++;
	}
	return (NULL);
}
