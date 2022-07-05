/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:43:53 by shwatana          #+#    #+#             */
/*   Updated: 2022/07/05 15:46:29 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 01:14:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/22 17:21:54 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

bool	ft_atoi_with_error(const char *str, int *num)
{
	long long	tmp_num;
	long long	lm_div;
	long long	lm_mod;
	bool		is_positive_num;

	tmp_num = 0;
	is_positive_num = true;
	lm_div = LONG_MAX / 10;
	lm_mod = LONG_MAX % 10;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			is_positive_num = false;
	while (ft_isdigit(*str))
	{
		if (tmp_num > lm_div || (tmp_num == lm_div && *str - '0' > lm_mod))
			return (false);
		tmp_num = tmp_num * 10 + *str - '0';
		str++;
	}
	if (!is_positive_num)
		tmp_num *= -1;
	*num = tmp_num;
	return (true);
}
