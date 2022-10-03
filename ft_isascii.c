/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:27:39 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/03 17:42:02 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isascii(int arg)
{
	if ((arg >= 0 && arg <= 127))
		return (1);
	else
		return (0);
}

/*
int main()
{
	unsigned char c = 128;
	unsigned char  b = 128;
	printf ("%i\n", ft_isascii(c));
	printf ("%i", isascii(b));
}
*/
