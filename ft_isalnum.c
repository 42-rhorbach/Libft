/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 16:34:33 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/03 17:23:33 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isalnum(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z')
		|| (arg >= '0' && arg <= '9'))
		return (1);
	else
		return (0);
}

/*
int main()
{
	char  c = '*';
	char  b = '*';
	printf ("%i\n", ft_isalnum(c));
	printf ("%i", isalnum(b));
}
*/
