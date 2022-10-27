/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:12:14 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/26 17:17:28 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pptr(unsigned long long num)
{
	int	i;

	i = 0;
	if (num < 16)
	{
		i += write(1, &"0123456789abcdef"[num], 1);
		return (i);
	}
	else
	{
		i += ft_pptr(num / 16);
		i += ft_pptr(num % 16);
	}
	return (i);
}
