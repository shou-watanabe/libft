/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 00:14:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 14:09:38 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
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
	diff = (int)(s1_p[i] - s2_p[i]);
	while (diff == 0 && i < size)
	{
		diff = (int)(s1_p[i] - s2_p[i]);
		i++;
	}
	return (diff);
}
