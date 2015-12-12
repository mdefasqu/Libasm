/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfts.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdefasqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/26 15:11:41 by mdefasqu          #+#    #+#             */
/*   Updated: 2015/03/28 20:14:24 by chtison          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTS_H
#define LIBFTS_H

#include <stddef.h>
#include <string.h>

int		ft_isdigit(int n);
int		ft_isalpha(int n);
int		ft_isalnum(int n);
int		ft_isascii(int n);
int		ft_isprint(int n);
int		ft_toupper(int n);
int		ft_isupper(int n);
int		ft_islower(int n);
int		ft_tolower(int n);
int		ft_isspace(int n);
int		ft_isblank(int n);
char	*ft_strcat(char *s1, const char *s2);
size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_puts(char *str);
void	ft_putstr(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strdup(char const *str);
void	ft_cat(int fd);
int	ft_strcmp(const char *s1, const char *s2);

#endif
