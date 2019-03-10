/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:35:17 by fsmith            #+#    #+#             */
/*   Updated: 2018/11/21 19:35:19 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;
	int n;

	res = 1;
	n = nb;
	if (nb > 12 || nb < 0)
		return (0);
	else
	{
		while (n > 1)
		{
			res = res * n;
			n--;
		}
	}
	return (res);
}
