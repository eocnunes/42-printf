/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:10:47 by enunes            #+#    #+#             */
/*   Updated: 2017/09/18 13:29:49 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

typedef struct s_flag 
{
	int			hash;
	int			zero;
	int			minus;
	int			plus;
	int			star;
	int			precision;
	int			min_width;
	char		conversion;
	uintmax_t	size;
}				t_flag;

int		ft_printf(const char *format, ...);

#endif
