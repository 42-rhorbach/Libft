/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/12 15:01:12 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/12 17:46:01 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		index;

	index = 0;
	while (index < dstsize - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	while (src[index] != '\0')
		index++;
	return (index);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "goodmorningafgsfg";  //12
// 	char s2[] = "baadeveningfhhhhhhhhhh";
// 	char s3[] = "goodmorningafgsfg";  //12
// 	char s4[] = "baadeveningfhhhhhhhhhh";

// 	printf("%lu\n", strlcpy(s1, s2, 18));
// 	printf("%lu\n", ft_strlcpy(s3, s4, 18));
// 	printf("%s\n", s1);
// 	printf("%s\n", s3);
// }
