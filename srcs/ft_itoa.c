/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:06 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/07 14:57:40 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	put_rec(long long nbr, char *str, int is_negative)
{
	int	mod;
	int	index;

	if (nbr < 10)
	{
		if (is_negative && nbr != 0)
		{
			str[0] = '-';
			str[1] = nbr + '0';
			return (2);
		}
		str[0] = nbr + '0';
		return (1);
	}
	index = put_rec(nbr / 10, str, is_negative);
	mod = nbr % 10;
	str[index] = mod + '0';
	return (index + 1);
}

static int	calc_mem_size(int n)
{
	int			mem_size;
	long long	num;

	num = (long long)n;
	mem_size = 1;
	if (num < 0)
	{
		num *= -1;
		mem_size++;
	}
	if (num == 0)
		return (mem_size + 1);
	while (num > 0)
	{
		mem_size++;
		num /= 10;
	}
	return (mem_size);
}

char	*ft_itoa(int n)
{
	int			is_negative;
	long long	nbr;
	char		*s_nbr;

	nbr = (long long)n;
	s_nbr = (char *)malloc(sizeof(char) * calc_mem_size(n));
	if (s_nbr == NULL)
		return (NULL);
	if (n < 0)
	{
		is_negative = 1;
		nbr *= -1;
	}
	else
		is_negative = 0;
	s_nbr[put_rec(nbr, s_nbr, is_negative)] = '\0';
	return (s_nbr);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(INT_MIN));
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
