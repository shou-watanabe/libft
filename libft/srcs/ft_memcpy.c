/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:10:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/08 16:22:33 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dstc);
}
