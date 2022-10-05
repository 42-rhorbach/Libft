/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:59:47 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/05 15:26:51 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



int	ft_isdigit(int arg)
{
	return (arg >= '0' && arg <= '9');
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char  c = '&';
	char  b = '&';
	printf ("%i\n", ft_isdigit(c));
	printf ("%i", isdigit(b));
}
*/
