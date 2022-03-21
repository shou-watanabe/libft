/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 12:12:25 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/16 12:21:52 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	cnt;

	if (size == 0 || ft_strlen(dst) >= size)
		return (size + ft_strlen(src));
	cnt = 0;
	while (*dst && (cnt < size - 1))
	{
		dst++;
		cnt++;
	}
	while (*src && (cnt < size - 1))
	{
		*dst++ = *src++;
		cnt++;
	}
	*dst = '\0';
	while (*src++)
		cnt++;
	return (cnt);
}
