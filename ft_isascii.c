/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rhorbach <rhorbach@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:27:39 by rhorbach      #+#    #+#                 */
/*   Updated: 2022/11/11 12:46:30 by rhorbach      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg <= 127);
}
