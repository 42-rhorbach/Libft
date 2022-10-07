/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 17:18:50 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/07 15:30:00 by rhorbach      ########   odam.nl         */
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
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char *str;
// 	str = malloc(5 * sizeof(char));
// 	str[0] = 't';
// 	str[1] = 'e';
// 	str[2] = 's';
// 	str[3] = 't';
// 	str[4] = '\0';


// 	printf("%s\n", ft_memchr(str, 'e', 0));
// 	printf("%s\n", memchr(str, 'e', 0));
// }
