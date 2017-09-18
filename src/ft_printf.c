/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enunes <eocnunes@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:59:43 by enunes            #+#    #+#             */
/*   Updated: 2017/09/18 15:53:27 by enunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libftprintf.h>

int			readformat(char **format, va_list ap)
{
	t_flag		f;
	while (*format || **format)
	{
		if (**format == '%')
		{

		}
		else
		{
			f.size++;
			ft_putchar(*format);
		}
		if (*format)
			*format++;
	}
	return (f.size);
}

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	int			ret;

	if (!format || !*format)
		return (0);
	va_start(ap, format);
	ret = readformat((char **)&format, ap);
	va_end(ap);
	return(ret);
}
