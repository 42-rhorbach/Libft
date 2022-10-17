/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 15:07:07 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/17 14:03:15 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	char	*ptr;

	str = (char *)s;
	i = 0;
	while (i != start)
		i++;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
		ft_strlcpy(ptr, &str[i], (len + 1));
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "hallo";
// 	printf("%s\n", ft_substr(str, 1, 3));
// }
