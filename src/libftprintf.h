/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:10:47 by enunes            #+#    #+#             */
/*   Updated: 2017/09/23 21:52:23 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <limits.h>

typedef struct		s_handler
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

/*	------------------------ ft_printf.c --------------------------	*/
int		ft_printf(const char *format, ...);
int		read_format(char **format, t_handler h);


/*	---------------------- parse_handlers.c -----------------------	*/
char	parse_handlers(char **format, t_handler *h);
int		h_reset(t_handler *h);

/*	----------------------- set_handlers.c ------------------------	*/
char	*parse_flags(char **format, t_handler *h);
char	*parse_width(char **format, t_handler *h);
char	*parse_prec(char **format, t_handler *h);
char	*parse_mod(char **format, t_handler *h);

/*	---------------------- check_handlers.c -----------------------	*/
char	is_flag(char c);
char	is_num(char c);
char	is_mod(char c);

#endif
