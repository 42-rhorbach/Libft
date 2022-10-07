/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 14:57:07 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/07 11:57:12 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int arg)
{
	return ((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z'));
}

/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	char  c = ']';
	char  b = ']';
	printf ("%i\n", ft_isalpha(c));
	printf ("%i", isalpha(b));
}
*/
