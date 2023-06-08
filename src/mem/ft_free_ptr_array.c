/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_free_2d_array.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/07 15:43:47 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/06/07 15:53:02 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free_ptr_array(void **array)
{
	size_t	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
}
