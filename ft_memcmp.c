/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:18:50 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/14 15:17:08 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void* str1, const void* str2, size_t n)
{
	size_t	i;
	unsigned char *s1;
	unsigned char *s2;


	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// int	main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "hello";

// 	printf ("%i\n", ft_memcmp(s1, s2, 0));
// 	printf ("%i\n", memcmp(s1, s2, 0));
// }
