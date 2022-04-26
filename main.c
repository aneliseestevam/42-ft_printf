/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 21:27:02 by aestevam          #+#    #+#             */
/*   Updated: 2022/04/26 20:21:29 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	// charactere tests
	ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest\n");
	ft_printf("charactere >> {{ %c }} \n", 'a');
	ft_printf(("%c", 'a'));
	ft_printf(("%c%c%c*", '\0', '1', 1));
	ft_printf(("%c small string", 'a'));
	ft_printf(("%c small string", '\0'));
	ft_printf(("the char is: %c", 'a'));
	ft_printf(("the char is: %c", '\0'));
	ft_printf(("n%cs", 'a'));
	ft_printf(("%c%c%c%c%c", 'a', 'i', 'u', 'e', 'o'));
	ft_printf(("l%cl%cl%cl%cl%c", 'a', 'i', 'u', 'e', 'o'));
	ft_printf(("l%cl%cl%cl%cl%c", '\0', '\0', '\0', 'e', '\0'));
	return (0);
}