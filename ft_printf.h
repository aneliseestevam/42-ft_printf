/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:44:29 by aestevam          #+#    #+#             */
/*   Updated: 2022/07/19 17:29:04 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *format, ...);
int ft_putnbr_base(unsigned long int nbr, char *base, char flag);
char    *ft_itoh(unsigned long long n, int letter);
int ft_print_p(unsigned long long c, int letter);
int ft_print_s(char *string);

#endif