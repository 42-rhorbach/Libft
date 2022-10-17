/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 12:27:32 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/17 16:28:09 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char		a;
	char		*temp;
	char		*str;
	int			i;

	temp = NULL;
	str = (char *)s;
	a = c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			temp = &str[i];
		i++;
	}
	if (a == '\0')
		temp = &str[i];
	return (temp);
}

// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>

// int	main()
// {
// 	char *str;
// 	str = malloc(5 * sizeof(char));
// 	str[0] = 't';
// 	str[1] = '\0';
// 	str[2] = 's';
// 	str[3] = 't';
// 	str[4] = '\0';

// 	printf("%s\n", ft_strrchr(str, '\0'));
// 	printf("%s\n", strrchr(str, '\0'));
// }
