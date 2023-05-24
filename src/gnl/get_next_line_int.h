/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_int.h                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/25 17:28:57 by rhorbach      #+#    #+#                 */
/*   Updated: 2023/05/24 15:15:51 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_INT_H
# define GET_NEXT_LINE_INT_H

# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# if BUFFER_SIZE <= 0
#  error BUFFER_SIZE should not be less than 1
# endif

typedef enum e_nl_found {
	ERROR,
	NL_NOT_FOUND,
	NL_FOUND
}	t_nl_found;

#endif
