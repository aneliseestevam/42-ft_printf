/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:08:35 by aestevam          #+#    #+#             */
/*   Updated: 2022/07/19 17:09:26 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(unsigned long int nbr, char *base, char flag)
{	
	int	i;
	int	display[16];
	int	lenght;

	i = 0;
	lenght = 0;
	if ((long)nbr < 0 && flag != 'p')
	{
		nbr *= -1;
		lenght = ft_putchar('-');
	}
	while (nbr != 0)
	{
		display[i++] = nbr % ft_strlen(base);
		nbr = nbr / ft_strlen(base);
	}
	if (i == 0 && nbr == 0)
		lenght = ft_putchar('0');
	while (i-- > 0)
		lenght += ft_putchar(base[display[i]]);
	return (lenght);
}

int	ft_print_s(char *string)
{
	int	counter;

	if (!string)
		return (ft_print_s("(null)"));
	counter = 0;
	while (*string)
	{
		ft_putchar_fd(*string, 1);
		string++;
		counter++;
	}
	return (counter);
}

char	*ft_itoh(unsigned long long n, int letter)
{
	unsigned long long	nbr;
	int					digits;
	char				*dest;

	nbr = n;
	digits = 1;
	while (n / 16 != 0 && digits++)
		n = n / 16;
	dest = malloc(digits + 1);
	if (!dest)
		return (NULL);
	dest[digits] = '\0';
	while (digits > 0 && digits--)
	{
		if ((nbr % 16) <= 9)
			dest[digits] = (nbr % 16) + '0';
		else
			dest[digits] = (nbr % 16) - 10 + letter;
		nbr = nbr / 16;
	}
	return (dest);
}