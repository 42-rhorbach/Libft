/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 12:21:25 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/24 15:12:49 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *pdst, const void *psrc, size_t len)
{
	size_t		index;
	char *const	dst = pdst;
	const char	*src = psrc;

	if (src < dst)
	{
		index = len;
		while (index > 0)
		{
			index--;
			dst[index] = src[index];
		}
	}
	else
	{
		index = 0;
		while (index < len)
		{
			dst[index] = src[index];
			index++;
		}
	}
	return (dst);
}
