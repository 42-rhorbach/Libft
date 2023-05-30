/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_satoi.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/30 12:44:37 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/30 12:45:57 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

bool	ft_satoi(const char *str, int *result_ptr)
{
	int		i;
	int		sign;
	long	c;

	sign = -1;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (false);
	c = 0;
	while (ft_isdigit(str[i]))
	{
		c = ((c * 10) - (str[i] - '0'));
		if (c * sign < -2147483648 || c * sign > 2147483647)
			return (false);
		i++;
	}
	*result_ptr = c * sign;
	return (str[i] == '\0');
}
