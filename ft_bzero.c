/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 16:27:06 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/04 17:01:30 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *ptr, size_t n)
{
	unsigned long	counter;
	unsigned char	*str;

	str = ptr;
	counter = 0;
	while (counter != n)
	{
		str[counter] = '\0';
		counter++;
	}
}

int	main(void)
{
	char	str1[50];
	char	str2[50];
	ft_bzero(str1, 10)
	printf ("%s\n", str1);
	printf ("%s", bzero(str2, 10));
}
