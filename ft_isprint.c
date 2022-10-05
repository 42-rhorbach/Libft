/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:31:24 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/05 15:36:23 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



int	ft_isprint(int arg)
{
	return (arg >= 32 && arg <= 126);
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char  c = '$';
	char  b = '$';
	printf ("%i\n", ft_isprint(c));
	printf ("%i", isprint(b));
}
*/
