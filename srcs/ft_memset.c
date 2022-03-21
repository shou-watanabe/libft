/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:45:02 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/08 16:26:25 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t size)
{
	unsigned char	*bufc;
	size_t			i;

	bufc = (unsigned char *)buf;
	i = 0;
	while (i < size)
	{
		bufc[i] = c;
		i++;
	}
	return (bufc);
}
