/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/16 12:56:06 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/24 15:40:12 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	count;

	count = (ft_strlen(str) + 1);
	ptr = malloc(count * sizeof(char));
	if (ptr != NULL)
		ft_strlcpy(ptr, str, count);
	return (ptr);
}
