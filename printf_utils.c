/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 19:19:48 by aestevam          #+#    #+#             */
/*   Updated: 2022/07/19 17:20:27 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long long c, int letter)
{
	int		counter;
	char	*string;

	string = ft_itoh(c, letter);
	ft_print_s("0x");
	counter = ft_print_s(string) + 2;
	free (string);
	return (counter);
}