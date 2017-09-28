/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:59:43 by enunes            #+#    #+#             */
/*   Updated: 2017/09/25 14:42:02 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int			read_format(char **format, t_handler h)
{
	while (*format || **format)
	{
		h_reset(&h);
		if (**format == '%' && (*(*format + 1)))
		{
			parse_handlers(format, &h);
		}
		else
		{
			h.size++;
			ft_putchar(*format);
		}
		if (**format)
			**format++;
	}
	return (h.size);
}

int			ft_printf(const char *format, ...)
{
	t_handler	h;
	int			ret;

	h.size = 0;
	if (!format || !*format)
		return (0);
	va_start(h.ap, format);
	ret = read_format((char **)&format, h);
	va_end(h.ap);
	return(ret);
}
