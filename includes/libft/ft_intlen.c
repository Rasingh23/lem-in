/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rasingh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 13:00:57 by rasingh           #+#    #+#             */
/*   Updated: 2018/06/22 13:20:13 by rasingh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int c)
{
	int i;

	i = 0;
	if (c <= 0)
		i++;
	while (c)
	{
		c /= 10;
		i++;
	}
	return (i);
}