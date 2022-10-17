/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 12:56:06 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/17 14:09:50 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char			*ptr;
	unsigned long	count;

	count = (ft_strlen((char *)str) + 1);
	ptr = malloc(count * sizeof(char));
	if (ptr != NULL)
		ft_strlcpy(ptr, str, count);
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	str1[] = "hallo";
// 	printf("%s\n", ft_strdup(str1));
// 	printf("%s\n", strdup(str1));
// }
