/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 16:42:21 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/17 17:15:21 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i != n && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "abcdef";
// 	char s2[] = "abcdefghijklmnop";

// 	printf("%d\n", ft_strncmp(s1, s2, 5));
// 	printf("%d\n", strncmp(s1, s2, 5));
// }
