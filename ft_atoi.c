/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 12:02:40 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/12 16:50:40 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_isspace(int c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	sign;

	i = 0;
	c = 0;
	sign = -1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (ft_isdigit((int)str[i]) == 1)
	{
		c = ((c * 10) - (str[i] - '0'));
		i++;
	}
	return (c * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main ()
// {
//    int val;
//    char str[100];

//    strcpy(str, " \f	-2147483647");
//    val = atoi(str);
//    printf("Nor | String value = %s, Int value = %d\n", str, val);

//    strcpy(str, " \f	-2147483647");
//    val = ft_atoi(str);
// 	printf("FT  | String value = %s, Int value = %d\n", str, val);

//    return(0);
// }
