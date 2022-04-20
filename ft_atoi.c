/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 01:14:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/14 21:39:34 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static int	over_num(bool is_positive_num)
{
	if (is_positive_num)
		return ((int)LONG_MAX);
	else
		return ((int)LONG_MIN);
}

int	ft_atoi(const char *str)
{
	long long	num;
	long long	lm_div;
	long long	lm_mod;
	bool		is_positive_num;

	num = 0;
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
		if (num > lm_div || (num == lm_div && *str - '0' > lm_mod))
			return (over_num(is_positive_num));
		num = num * 10 + *str - '0';
		str++;
	}
	if (!is_positive_num)
		num *= -1;
	return ((int)num);
}

// int main(void)
// {
// 	puts("----ft_atoi------");
//     char    str91[] = "-a-5";
//     printf("zisaku  : %d\n", ft_atoi(str91));
//     printf("library : %d\n", atoi(str91));
//     char    str92[] = "-100";
//     printf("zisaku  : %d\n", ft_atoi(str92));
//     printf("library : %d\n", atoi(str92));
//     char    str93[] = "1000321";
//     printf("zisaku  : %d\n", ft_atoi(str93));
//     printf("library : %d\n", atoi(str93));
//     char    str94[] = "2147483648";
//     printf("zisaku  : %d\n", ft_atoi(str94));
//     printf("library : %d\n", atoi(str94));
//     char    str95[] = "-2147483649";
//     printf("zisaku  : %d\n", ft_atoi(str95));
//     printf("library : %d\n", atoi(str95));
//     char    str96[] = "100ab100";
//     printf("zisaku  : %d\n", ft_atoi(str96));
//     printf("library : %d\n", atoi(str96));
//     char    str97[] = "\0";
//     printf("zisaku  : %d\n", ft_atoi(str97));
//     printf("library : %d\n", atoi(str97));
//     char    str98[] = "111.11";
//     printf("zisaku  : %d\n", ft_atoi(str98));
//     printf("library : %d\n", atoi(str98));
//     char    str99[] = "-2147483648";
//     printf("zisaku  : %d\n", ft_atoi(str99));
//     printf("library : %d\n", atoi(str99));
//     char    str99_1[] = "2147483647";
//     printf("zisaku  : %d\n", ft_atoi(str99_1));
//     printf("library : %d\n", atoi(str99_1));
//     char str99_2[] = "999999999";
//     printf("zisaku  : %d\n", ft_atoi(str99_2));
//     printf("library : %d\n", atoi(str99_2));
// 	char str99_3[] = "9223372036854775808";
//     printf("zisaku  : %d\n", ft_atoi(str99_3));
//     printf("library : %d\n", atoi(str99_3));
// 	return (0);
// }
