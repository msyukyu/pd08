/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 19:22:52 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/21 19:42:46 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of argumets.\n"
# define TRUE 1
# define FALSE 0
# define 
# include <unistd.h>

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif
