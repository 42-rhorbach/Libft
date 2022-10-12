/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 12:21:25 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/12 16:26:58 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *pdst, const void *psrc, size_t len)
{
	size_t		index;
	char		*dst;
	const char	*src;

	index = len;
	dst = pdst;
	src = psrc;
	if (src > dst)
		ft_memcpy(dst, src, len);
	if (src < dst)
	{
		while (index > 0)
		{
			index--;
			dst[index] = src[index];
		}
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char str[] = "foobarz";
// 	char str1[] = "foobarz"; // fffffrz | ffoobrz :goed

// 	memmove(str, str + 1, 4);
// 	ft_memmove(str1, str1 + 1, 4);
// 	printf("%s\n", str);
// 	printf("%s\n", str1);
// }
