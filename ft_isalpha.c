/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 14:57:07 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/03 16:02:00 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <ctype.h>
*/

int	ft_isalpha(int arg)
{
	if ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'))
		return (1);
	else
		return (0);
}

/*
int main()
{
	char  c = ']';
	char  b = ']';
	printf ("%i\n", ft_isalpha(c));
	printf ("%i", isalpha(b));
}
*/
