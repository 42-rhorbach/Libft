/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 13:05:58 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/17 14:08:02 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = 0;
	while (needle[l] != '\0' )
		l++;
	while (i != len && haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
			j++;
		else if (j == l)
			return ((char *)&haystack[i - l]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char hay[] = "goodmorning";
// 	char needle[] = "aklsfjadjsfoasdlkajs";
// 	// char *needle = NULL;

// 	printf("%s\n", ft_strnstr(hay, needle, 15));
// 	printf("%s\n", strnstr(hay, needle, 15));
// }
