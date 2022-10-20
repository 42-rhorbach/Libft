/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 12:37:15 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/20 17:22:20 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_intlen(int n) //WIP
{
	int	counter;

	counter = 0;
	if (n <= 0)
		counter++;
	while (n != 0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

// char	*ft_itoa(int n)
// {
// 	char	*ptr;
// 	int		len;
// 	int		sign;
// 	int		i;

// 	len = ft_intlen(n);
// 	i = len - 1;
// 	sign = 1;
// 	ptr = malloc((len + 1) * sizeof(char));
// 	if (ptr == NULL)
// 		return (NULL);
// 	if (n < 0)
// 	{
// 		ptr[0] = '-';
// 		sign = -1;
// 	}
// 	while (i != 0)
// 	{
// 		ptr[i] = sign * (n % 10) + '0';
// 		n /= 10;
// 		i--;
// 	}
// 	if (sign == 1)
// 		ptr[i] = (n % 10) + '0';
// 	ptr[len] = '\0';
// 	return (ptr);
// }

char	*ft_itoa(int n)
{
	char	*ptr;
	int		sign;
	int		i;

	i = ft_intlen(n);
	sign = 1;
	ptr = malloc((i + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[i--] = '\0';
	if (n < 0)
		sign *= -1;
	while (i != 0)
	{
		ptr[i] = sign * (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (sign == 1)
		ptr[i] = (n % 10) + '0';
	else
		ptr[i] = '-';
	return (ptr);
}
