/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 01:14:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/17 09:21:35 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(char *str)
{
	long long	num;
	bool		is_exist_minus;

	num = 0;
	is_exist_minus = false;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_exist_minus = true;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (is_exist_minus)
		num *= -1;
	return ((int)num);
}

// int	main(void)
// {
// 	char	*num="-2147483650";

// 	printf("%d\n", ft_atoi(num));
// 	printf("%d\n", atoi(num));

// }
