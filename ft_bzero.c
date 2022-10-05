/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:27:06 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/05 16:47:32 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, '\0', n);
}

/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	str1[50];
	char	str2[50];

	int	counter1;
	int counter2;

	counter1 = 0;
	counter2 = 0;

	ft_memset(str1, 'h', 20);
	ft_memset(str2, 'h', 20);                                                      a

	ft_bzero(str1, 10);
	bzero (str2, 10);

	while (str1[counter1] == '\0')
	{
		counter1++;
	}
	while (str2[counter2] == '\0')
	{
		counter2++;
	}

	printf("%i\n", counter1);
	printf("%i\n", counter2);
}
*/
