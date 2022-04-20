/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:22:17 by shwatana          #+#    #+#             */
/*   Updated: 2022/04/20 14:24:32 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_all(char	**arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**last_word_split(char **ss, char const *str, size_t i, size_t len)
{
	ss[i] = ft_substr((str - len), 0, len);
	if (ss[i] == NULL)
		return (free_all(ss));
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
					return (free_all(sp_strs));
			}
			len = 0;
		}
		else
			len++;
		str++;
	}
	sp_strs[word_cnt] = NULL;
	if (len > 0)
		sp_strs = last_word_split(sp_strs, str, word_cnt, len);
	return (sp_strs);
}

static size_t	count_word(const char *str, char c)
{
	size_t	i;
	size_t	word_cnt;
	bool	is_bef_c;

	word_cnt = 0;
	is_bef_c = true;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			if (!is_bef_c)
				word_cnt++;
			is_bef_c = true;
		}
		else
			is_bef_c = false;
		i++;
	}
	if (!is_bef_c)
		word_cnt++;
	return (word_cnt);
}

char	**ft_split(const char *str, char c)
{
	char	**sp_strs;
	size_t	word_cnt;

	if (str == NULL)
		return (NULL);
	if (str[0] == '\0')
	{
		sp_strs = (char **)malloc(sizeof(char *));
		if (sp_strs == NULL)
			return (NULL);
		sp_strs[0] = NULL;
		return (sp_strs);
	}
	word_cnt = count_word(str, c);
	sp_strs = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (sp_strs == NULL)
		return (NULL);
	return (store_sp_str(sp_strs, str, c, 0));
}

// int main(void)
// {
// 	char **strs = ft_split("", 'a');

// 	printf("%s\n", strs[0]);
// 	printf("%s\n", strs[0]);
// 	return (0);
// }

// int main(void)
// {
// 	char	*strs[] = {
// 		"Hello,World,Good,Morning",
// 		"Hello, World, Good, Morning",
// 		"Hello.....World.....Good.....Morning",
// 		"",
// 		"Hello,World,Good,Morning,",
// 		",,,Hello,World,,,,Good,Morning,,,",
// 		"          "};
// 	char	seps[] = {',', ' ', '.', 'G', '\0'};
// 	for (int i = 0; i < 5; i++)
// 	{
// 		char	sep = seps[i];
// 		for (int j = 0; j < 7 ; j++)
// 		{
// 			char	*str = strs[j];
// 			char	**arr = ft_split(str, sep);
// 			printf("ft_split(\"%s\", \"%c\")	:%p\n", str, sep, arr);
// 			if (arr == NULL)
// 				continue ;
// 			int	k = 0;
// 			printf("{");
// 			while (arr[k])
// 			{
// 				if (k > 0)
// 					printf(", ");
// 				printf("\"%s\"", arr[k]);
// 				k++;
// 			}
// 			printf("}, size = %i\n\n", k);
// 			if (arr)
// 				free(arr);
// 		}
// 	}
// }
