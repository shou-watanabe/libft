/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:25:34 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/16 10:22:45 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (dst_p < src_p)
	{
		while (size--)
			*dst_p++ = *src_p++;
	}
	else
	{
		dst_p += size - 1;
		src_p += size - 1;
		while (size--)
			*dst_p-- = *src_p--;
	}
	return (dst_p);
}
