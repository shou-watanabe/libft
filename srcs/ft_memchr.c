/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 23:33:30 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/01 22:12:46 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	char	cchr;
	char	*buf_chr;
	size_t	i;

	i = 0;
	cchr = (char)c;
	buf_chr = (char *)buf;
	while (i < n)
	{
		if (buf_chr[i] == cchr)
			return (buf_chr + i);
		i++;
	}
	return (NULL);
}
