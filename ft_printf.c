/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 10:27:02 by aestevam          #+#    #+#             */
/*   Updated: 2022/04/26 19:53:44 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int what_a_flag(va_list *args, char flag)
{
    int len;

    len = 0;
    if (flag == 'c')
        len += ft_putchar(va_arg(*args, int));
    return (len);
}

int ft_printf(const char *data, ...)
{
    va_list args;
    int     i;
    int     len;

    i = 0;
    len = 0;
    va_start(args, data);
    while (data[i])
    {
        if (data[i] == '%')
            len += what_a_flag(&args, data[++i]);
        else
            len += ft_putchar(data[i]);
        i++;
    }
    va_end(args);
    return (len);
}