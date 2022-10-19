/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:37:15 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/19 15:48:24 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_intlen(int n) //WIP
{
	int	counter;

	counter = 0;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;
	int		i;


	len = ft_intlen(n); // 125
	i = (len - 1);
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr != NULL)
	{
		while (i != 0)
		{
			if (n != 0)
			{
				n = n / 10; // 125/10 -> 12,5
				ptr[i] = ((n % 10) + 48); // 12,5%10 -> 5
			}
			i--;
		}
	}
	return (ptr);
}
