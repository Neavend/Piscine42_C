/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsimon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/16 23:06:32 by nsimon            #+#    #+#             */
/*   Updated: 2015/07/17 00:00:31 by nsimon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_bouton(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i >= k && i <= j))
		return (i);
	if ((j >= k && j <= i) || (j >= i && j <= k))
		return (j);
	if ((k >= i && k <= j) || (k >= j && k <= i))
		return (k);
	return (0);
}
