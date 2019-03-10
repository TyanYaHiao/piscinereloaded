/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsmith <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:09:06 by fsmith            #+#    #+#             */
/*   Updated: 2018/11/26 21:17:40 by fsmith           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H

# define HEAD_H
# include <unistd.h>
# include <fcntl.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
int			read_and_write(char **argv);

#endif
