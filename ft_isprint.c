/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 12:31:24 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/04 12:41:35 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 126)
		return (1);
	else
		return (0);
}

/*
int main()
{
	char  c = '$';
	char  b = '$';
	printf ("%i\n", ft_isprint(c));
	printf ("%i", isprint(b));
}
*/
