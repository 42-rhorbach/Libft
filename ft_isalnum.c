/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 16:34:33 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/05 15:20:09 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	return (ft_isalpha(arg) || ft_isdigit(arg));
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	char  c = '*';
// 	char  b = '*';
// 	printf ("%i\n", ft_isalnum(c));
// 	printf ("%i", isalnum(b));
// }
