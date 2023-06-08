/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ptr_array_length.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/08 15:57:54 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/06/08 16:00:01 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_ptr_array_length(void **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
		i++;
	return (i);
}
