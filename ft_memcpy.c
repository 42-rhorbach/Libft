/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 16:57:25 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/06 15:15:45 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *pdst, const void *psrc, size_t n)
{
	size_t		index;
	char		*dst;
	const char	*src;

	index = 0;
	dst = pdst;
	src = psrc;
	while (index != n)
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char dst[] = "newguy";
// 	char src[] = "oldman";
// 	char dst1[] = "newguy";
// 	char src1[] = "oldman";

// 	memcpy(dst, src, 4);
// 	printf("%s\n", dst);
// 	printf("%s\n", ft_memcpy(dst1, src1, 4));
// }
