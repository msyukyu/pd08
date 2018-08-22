/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabeloos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 10:29:10 by dabeloos          #+#    #+#             */
/*   Updated: 2018/08/22 16:36:45 by dabeloos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*array;

	array = malloc(sizeof(struct s_stock_par) * (ac + 1));
	i = -1;
	while (++i < ac)
	{
		array[i].size_param = ft_strlen(av[i]);
		array[i].str = malloc(sizeof(char*));
		array[i].str = av[i];
		array[i].copy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
		array[i].copy = ft_strcpy(array[i].copy, av[i]);
		array[i].tab = ft_split_whitespaces(av[i]);
	}
	array[i].str = NULL;
	return (array);
}
