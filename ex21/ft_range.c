/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 17:55:10 by fsmith            #+#    #+#             */
/*   Updated: 2018/11/24 17:55:11 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		len;
	int		*array;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	array = (int*)malloc(sizeof(*array) * (len + 1));
	while (i < len)
	{
		array[i] = (min + i);
		i++;
	}
	array[i] = '\0';
	return (array);
}
