/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 15:37:54 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/25 12:49:43 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count != 0 && SIZE_MAX / count < size)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr != NULL)
		ft_bzero(ptr, count * size);
	return (ptr);
}
