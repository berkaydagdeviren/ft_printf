/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:14:03 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/26 17:16:08 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int	ft_punsg(unsigned int n)
{
	char	*num;
	int		len;

	len = 0;
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	num = ft_uitoa(n);
	len += ft_pstr(num);
	free(num);
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_numlen(n);
	num = (char *)malloc(len + 1);
	if (!num)
		return (0);
	num[len] = '\0';
	len--;
	while (n)
	{
		num[len--] = n % 10 + '0';
		n = n / 10;
	}
	return (num);
}

int	ft_numlen(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}
