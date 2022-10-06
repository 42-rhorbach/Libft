/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/06 11:12:27 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/06 13:56:55 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <ctype.h>
// #include <stdio.h>

// int	main()
// {
// 	char c = 'H';
// 	char g = 'H';

// 	printf("%i\n", ft_tolower(c));
// 	printf("%i\n", tolower(g));
// }
