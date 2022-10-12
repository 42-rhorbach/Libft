/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 17:00:19 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/12 17:45:15 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		len;
	size_t		index;

	len = 0;
	index = 0;
	while (dst[len] != '\0')
		len++;
	return (ft_strlcpy(&dst[len], src, dstsize - len) + len);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char s1[20] = "goodmorning";  //12
	char s2[] = "ciaoo00000";
	char s3[20] = "goodmorning";  //12
	char s4[] = "ciaoo00000";

	printf("%lu\n", strlcat(s1, s2, 20));
	printf("%lu\n", ft_strlcat(s3, s4, 20));
	printf("%s\n", s1);
	printf("%s\n", s3);
}
