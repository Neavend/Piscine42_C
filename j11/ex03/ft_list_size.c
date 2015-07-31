/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/22 11:14:24 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/22 12:17:11 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list	*a;
	int		i;

	i = 0;
	a = begin_list;
	while (a != NULL)
	{
		i++;
		a = a->next;
	}
	return (i);
}
