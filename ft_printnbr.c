/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:11:12 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/26 17:17:18 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_pnbr(int n)
{
	char	*num;
	int		len;

	num = ft_itoa(n);
	len = ft_strlen(num);
	ft_pstr(num);
	free(num);
	return (len);
}
