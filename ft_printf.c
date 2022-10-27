/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:00:32 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/26 17:09:59 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	printf_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
	len += ft_pchar(va_arg(args, int));
	else if (format == 's')
	len += ft_pstr(va_arg(args, char *));
	else if (format == 'p')
	{
		write(1, "0x", 2);
		len += ft_pptr(va_arg(args, unsigned long long)) + 2;
	}
	else if (format == 'd' || format == 'i')
	len += ft_pnbr(va_arg(args, int));
	else if (format == '%')
	len += ft_pperc();
	else if (format == 'u')
	len += ft_punsg(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
	len += ft_phex(va_arg(args, unsigned int), format);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		printf_length;
	int		i;

	i = 0;
	printf_length = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			printf_length += printf_format(args, format[i + 1]);
			i++;
		}
		else
		printf_length += ft_pchar(format[i]);
		i++;
	}
	va_end(args);
	return (printf_length);
}
