/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:22:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/06 23:54:18 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char	**arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**last_word_split(char **ss, char const *str, size_t i, size_t len)
{
	ss[i] = ft_substr((str - len), 0, len);
	if (ss[i] == NULL)
		free_all(ss);
	ss[i + 1] = NULL;
	return (ss);
}

static char	**store_sp_str(char **sp_strs, const char *str, char c, size_t len)
{
	size_t	word_cnt;

	word_cnt = 0;
	while (*str)
	{
		if (*str == c)
		{
			if (len != 0)
			{
				sp_strs[word_cnt] = ft_substr(str - len, 0, len);
				if (sp_strs[word_cnt++] == NULL)
					free_all(sp_strs);
			}
			len = 0;
		}
		else
			len++;
		str++;
	}
	sp_strs[word_cnt] = NULL;
	if ((ft_strlen(str) > 0) || len > 0)
		sp_strs = last_word_split(sp_strs, str, word_cnt, len);
	return (sp_strs);
}

static void	count_word(const char *str, char c, size_t *word_cnt, size_t *len)
{
	size_t	i;

	*word_cnt = 0;
	i = 0;
	*len = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (*len != 0)
				(*word_cnt)++;
			*len = 0;
		}
		else
			(*len)++;
		i++;
	}
}

char	**ft_split(const char *str, char c)
{
	char	**sp_strs;
	size_t	word_cnt;
	size_t	len;

	if (str == NULL)
		return (NULL);
	count_word(str, c, &word_cnt, &len);
	sp_strs = malloc(sizeof(char *) * (word_cnt + 1 + (len > 0)));
	if (sp_strs == NULL)
		return (NULL);
	return (store_sp_str(sp_strs, str, c, 0));
}
