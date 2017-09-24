/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:31:51 by enunes            #+#    #+#             */
/*   Updated: 2017/09/22 16:20:18 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int			h_reset(t_handler *h)
{
	h->hash = 0;
	h->zero = 0;
	h->minus = 0;
	h->plus = 0;
	h->space = 0;
	h->prec = -1;
	h->width = 0;
	h->hh = 0;
	h->h = 0;
	h->l = 0;
	h->ll = 0;
	h->j = 0;
	h->z = 0;
	h->conversion = '\0';
}

char		parse_handlers(char **format, t_handler *h)
{
	if (!(parse_flags(format, &h))
		return (-1);
	if (!(parse_width(format, &h))
		return (-1);
	if (!(parse_prec(format, &h))
		return (-1);
	if (!(parse_length(format, &h))
		return (-1);
	if (**format == '\0')
		return (0);
	//parse_specifiers	
}
