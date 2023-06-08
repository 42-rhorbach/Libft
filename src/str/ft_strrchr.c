/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/07 12:27:32 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/06/07 13:59:30 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char		*temp;
	char		*str;
	int			i;

	temp = NULL;
	str = (char *)s;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			temp = &str[i];
		i++;
	}
	if (c == '\0')
		temp = &str[i];
	return (temp);
}
