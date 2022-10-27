/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydagdevi <ydagdevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:01:17 by ydagdevi          #+#    #+#             */
/*   Updated: 2022/10/25 16:10:52 by ydagdevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);
int		ft_pchar(int c);
int		ft_pstr(char *s);
int		ft_pptr(unsigned long long num);
int		ft_pnbr(int n);
int		ft_pperc(void);
int		ft_punsg(unsigned int n);
int		ft_numlen(unsigned	int num);
char	*ft_uitoa(unsigned int n);
int		ft_phex(unsigned int num, char format);
char	*ft_itoa(int n);
int		ft_strlen(char *str);
#endif