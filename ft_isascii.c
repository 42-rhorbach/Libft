/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:27:39 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/06 17:03:05 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg <= 127);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	unsigned char c = 128;
	unsigned char  b = 128;
	printf ("%i\n", ft_isascii(c));
	printf ("%i", isascii(b));
}
*/
