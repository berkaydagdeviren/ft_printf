/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:10:14 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/26 17:17:12 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_phex(unsigned int num, char format)
{
	int	i;

	i = 0;
	if (num < 16)
	{
		if (format == 'x')
		i += write(1, &"0123456789abcdef"[num], 1);
		else if (format == 'X')
		i += write(1, &"0123456789ABCDEF"[num], 1);
		return (i);
	}
	else
	{
		i += ft_phex(num / 16, format);
		i += ft_phex(num % 16, format);
	}
	return (i);
}
