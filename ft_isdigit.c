/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 15:59:47 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/03 16:36:36 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>


int	ft_isdigit(int arg)
{
	if ((arg >= '0' && arg <= '9'))
		return (1);
	else
		return (0);
}

int main()
{
	char  c = '&';
	char  b = '&';
	printf ("%i\n", ft_isdigit(c));
	printf ("%i", isdigit(b));
}
