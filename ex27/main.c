/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:01:18 by fsmith            #+#    #+#             */
/*   Updated: 2018/11/26 21:21:17 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int			read_and_write(char **argv)
{
	char	c;
	int		fd;

	fd = 0;
	fd = open(argv[1], O_RDONLY);
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}

int			main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	if (argc == 2)
	{
		read_and_write(argv);
		return (0);
	}
	return (1);
}
