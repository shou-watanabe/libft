/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 18:36:06 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/17 19:22:13 by shwatana         ###   ########.fr       */
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

char	*ft_itoa(int n)
{
	int			is_negative;
	long long	nbr;
	char		*s_nbr;

	nbr = (long long)n;
	s_nbr = (char *)malloc(sizeof(char *) * 40);
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

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
