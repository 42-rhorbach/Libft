/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:46:58 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/12 17:43:01 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

void	*ft_memset(void *ptr, int c, size_t n);
int		ft_isalpha(int arg);
int		ft_isdigit(int arg);
void	*ft_memcpy(void *pdst, const void *psrc, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

#endif
