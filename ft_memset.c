/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 13:34:08 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/04 17:01:30 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned long	counter;
	unsigned char	b;
	unsigned char	*str;

	b = c;
	str = ptr;
	counter = 0;
	while (counter != n)
	{
		str[counter] = c;
		counter++;
	}
	str[counter + 1] = '\0';
	return (str); //lmao what returned een string maar void?
}

/*
int	main()
{
	char	str1[50];
	char	str2[50];

	printf ("%s\n", ft_memset(str1, '$', 60));
	printf ("%s", memset(str2, '$', 60));
}
*/
