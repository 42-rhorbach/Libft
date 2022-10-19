/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 15:07:07 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/19 15:48:15 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len) //WIP
{
	//size_t			i;
	char			*str;
	char			*ptr;
	unsigned long	strlen;

	str = (char *)s;
	strlen = ft_strlen(str);
	if (strlen < start && strlen < )


		ptr = malloc((len + 1) * sizeof(char));
		if (ptr != NULL)
			ft_strlcpy(ptr, &str[start], (len + 1));
	return (ptr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char	str[] = "hallo";
// 	printf("%s\n", ft_substr(str, 1, 3));
// }
