/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:27:36 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/25 16:31:07 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = ft_strlen((char *)s1) - 1;
	while (j != 0)
	{
		if (ft_strchr(set, s1[j]) == NULL)
			break ;
		j--;
	}
	return (ft_substr(s1, i, j - i + 1));
}

// --old while
// while (s1[i] != '\0' && set[j] != '\0')
// {
// 	if (s1[i] == set[j])
// 	{
// 		j = 0;
// 		i++;
// 	}
// 	else
// 		j++;
// }
