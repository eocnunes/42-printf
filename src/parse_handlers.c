/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:31:51 by enunes            #+#    #+#             */
/*   Updated: 2017/09/18 16:05:10 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

char		parse_handlers(char **format, va_list ap, t_handler *h)
{
	if (!(parse_flags(format, h))
		return (-1);
	if (!(parse_width(format, ap, h))
		return (-1);
	if (!(parse_prec(format, ap, h))
		return (-1);
	if (!(parse_length(format, h))
		return (-1);
	if (**format == '\0')
		return (0);
	//parse_specifiers	
}
