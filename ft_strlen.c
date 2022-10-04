/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:42:38 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/04 17:01:30 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
#include <string.h>
*/

unsigned long	ft_strlen(char *ptr)
{
	unsigned long	counter;

	counter = 0;
	while (ptr[counter] != '\0')
		counter++;
	return (counter);
}

/*
int main()
{
	char	a[] = "test";

	printf ("%lu\n", ft_strlen(a));
	printf ("%lu", strlen(a));
}
*/
