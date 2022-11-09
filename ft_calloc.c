/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/14 15:37:54 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/11/09 11:49:26 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
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

// #include <stdio.h>

// int	main(void)
// {
// 	unsigned long counter1;
// 	unsigned long counter2;
// 	char *ptr1;
// 	char *ptr2;

// 	counter1 = 0;
// 	counter2 = 0;
// 	ptr1 = ft_calloc(5, sizeof(char));
// 	ptr2 = calloc(5, sizeof(char));

// 	while (counter1 < 5 * sizeof(char) && ptr1[counter1] == '\0')
// 	{
// 		counter1++;
// 	}
// 	while (counter2 < 5 * sizeof(char) && ptr2[counter2] == '\0')
// 	{
// 		counter2++;
// 	}
// 	free(ptr1);
// 	free(ptr2);

// 	printf("%lu\n", counter1);
// 	printf("%lu\n", counter2);
// }
