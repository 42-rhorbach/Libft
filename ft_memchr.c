/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:18:50 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/10 13:44:34 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			a;
	size_t			i;
	const char		*str;

	str = s;
	a = c;
	i = 0;
	while (i != n)
	{
		if (str[i] == a)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	// char *str;
// 	// str = malloc(5 * sizeof(char));
// 	// str[0] = 't';
// 	// str[1] = 'e';
// 	// str[2] = 's';
// 	// str[3] = 't';
// 	// str[4] = '\0';

// 	char	c = 'd';
// 	char	str[] = "hello";
// 	char 	c2 = 'q';
// 	char	c1 = 'a';
// 	char	str1[] = "hello";

// 	(void)c2;
// 	// {'h', 'e', 'l', 'l', 'o', '\0', 'a', 'q', 't', 'e', 's', 't', '\0', 'd'};


// 	printf("%s\n", ft_memchr(str, c, 8));
// 	printf("%s\n", memchr(str1, c1, 8));
// }
