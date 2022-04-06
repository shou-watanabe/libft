/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 01:14:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 15:36:03 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	over_num(bool is_regular_num)
{
	if (is_regular_num == 1)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long long	num;
	long long	lm_div;
	long long	lm_mod;
	bool		is_regular_num;

	num = 0;
	is_regular_num = true;
	lm_div = LONG_MAX / 10;
	lm_mod = LONG_MAX % 10;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			is_regular_num = false;
	while (ft_isdigit(*str))
	{
		if (num > lm_div || (num == lm_div && *str - '0' > lm_mod))
			return (over_num(is_regular_num));
		num = num * 10 + *str - '0';
		str++;
	}
	if (!is_regular_num)
		num *= -1;
	return ((int)num);
}
