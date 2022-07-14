/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:27:02 by aestevam          #+#    #+#             */
/*   Updated: 2022/07/14 13:24:43 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	what_a_flag(va_list *argptr, char flag)
{
	int	len;

	len = 0;
	if (flag == 'c')
		len = ft_putchar(va_arg(*argptr, int)) + len;
	if (flag == 's')
		len = ft_putstr(va_arg(*argptr, char *)) + len;
	if (flag == '%')
		len = ft_putchar('%') + len;
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	argptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(argptr, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += what_a_flag(&argptr, str[++i]);
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(argptr);
	return (len);
}