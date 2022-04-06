/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:25:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 13:42:30 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	bool	is_upper_alpha;
	bool	is_lower_alpha;
	bool	is_digit;

	is_upper_alpha = ('A' <= c && c <= 'Z');
	is_lower_alpha = ('a' <= c && c <= 'z');
	is_digit = ('0' <= c && c <= '9');
	return (is_upper_alpha || is_lower_alpha || is_digit);
}
