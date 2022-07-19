/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:27:02 by aestevam          #+#    #+#             */
/*   Updated: 2022/07/19 17:26:27 by aestevam         ###   ########.fr       */
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
	if (flag == 'd' || flag == 'i')
		len = ft_putnbr_base(va_arg(*argptr, int), "0123456789", flag) + len;
	if (flag == 'u')
		len = ft_putnbr_base(va_arg(*argptr, unsigned int), "0123456789", flag)
			+ len;
	if (flag == 'p')
		len = ft_print_p (va_arg(*argptr, unsigned long long), 'a');
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
