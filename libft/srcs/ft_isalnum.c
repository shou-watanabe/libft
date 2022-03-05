/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 02:25:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/06 02:30:43 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char c)
{
	int	is_upper_alpha;
	int	is_lower_alpha;
	int	is_digit;

	is_upper_alpha = ('A' <= c && c <= 'Z');
	is_upper_alpha = ('a' <= c && c <= 'z');
	is_digit = ('0' <= c && c <= '9');
	return (is_upper_alpha || is_upper_alpha || is_digit);
}
