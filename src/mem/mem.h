/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mem.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/24 15:33:02 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/24 15:33:04 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

void	ft_bzero(void *ptr, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *pdst, const void *psrc, size_t n);
void	*ft_memmove(void *pdst, const void *psrc, size_t len);
void	*ft_memset(void *ptr, int c, size_t n);

#endif
