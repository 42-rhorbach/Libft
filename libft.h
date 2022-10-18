/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:46:58 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/18 13:30:42 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_atoi(const char *str);
void			ft_bzero(void *ptr, size_t n);
int				ft_isalnum(int arg);
int				ft_isalpha(int arg);
int				ft_isascii(int arg);
int				ft_isdigit(int arg);
int				ft_isprint(int arg);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *pdst, const void *psrc, size_t n);
void			*ft_memmove(void *pdst, const void *psrc, size_t len);
void			*ft_memset(void *ptr, int c, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *str);
char			*ft_strjoin(char const *s1, char const *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize);
unsigned long	ft_strlen(char *ptr);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif
