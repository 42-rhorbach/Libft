/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 13:57:32 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/06 17:03:56 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		i;

	a = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (a == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int	main()
// {
// 	char	c = 'n';
// 	char	str[] = "muninn";
// 	char	c1 = 'n';
// 	char	str1[] = "muninn";

// 	printf("%s\n", ft_strchr(str, c));
// 	printf("%s\n", strchr(str1, c1));
// }
