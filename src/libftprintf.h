/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:10:47 by enunes            #+#    #+#             */
/*   Updated: 2017/09/22 16:20:20 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <limits.h>

typedef struct s_handler
{
	va_list			ap;
	int				hash;
	int				zero;
	int				minus;
	int				plus;
	int				space;
	int				prec;
	int				width;
	int				hh;
	int				h;
	int				l;
	int				ll;
	int				j;
	int				z;	
	char			conversion;
	unsigned int	size;
}					t_handler;

int		ft_printf(const char *format, ...);

#endif
