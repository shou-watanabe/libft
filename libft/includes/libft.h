/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwatana <shwatana@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 01:51:00 by shwatana          #+#    #+#             */
/*   Updated: 2022/03/11 23:40:23 by shwatana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
// void	*ft_memccpy(void *dst, void *src, int c, size_t n);
// void	*ft_memmove(void *dst, const void *src, size_t size);
void	*ft_memset(void *buf, int c, size_t size);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
