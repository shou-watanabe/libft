/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:43:53 by shwatana          #+#    #+#             */
/*   Updated: 2022/07/05 16:11:49 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

bool	ft_atoi_with_error(const char *str, int *num)
{
	int		tmp;
	int		im_div;
	int		im_mod;
	bool	is_posi;

	tmp = 0;
	is_posi = true;
	im_div = INT_MAX / 10;
	im_mod = INT_MAX % 10;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			is_posi = false;
	while (ft_isdigit(*str))
	{
		if (tmp > im_div || (tmp == im_div && *str - '0' > im_mod + (!is_posi)))
			return (false);
		tmp = tmp * 10 + *str - '0';
		str++;
	}
	if (!is_posi)
		tmp *= -1;
	*num = tmp;
	return (true);
}
