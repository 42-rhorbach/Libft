/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/11 12:02:40 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/10/11 16:53:42 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	c;
	int	sign;

	i = 0;
	c = 0;
	sign = 1;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit((int)str[i]) == 1)
	{
		c = ((c * 10) + str[i] - '0');
		i++;
	}
	return (c * sign);
}

/*
MAX INT = 2147483647
MIN INT = -2147483648

2147483648
...
-2147483648

2147483649
...
-2147483648
-2147483647
*/
/*
100	-4
101	-3
110	-2
111	-1
000	0
001	1
010	2
011	3
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
   int val;
   char str[100];

   strcpy(str, "-+21474836");
   val = atoi(str);
   printf("Nor | String value = %s, Int value = %d\n", str, val);

   strcpy(str, "-+21474836");
   val = ft_atoi(str);
	printf("FT  | String value = %s, Int value = %d\n", str, val);

   return(0);
}
