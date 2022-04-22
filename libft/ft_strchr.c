/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestevam <aestevam@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 21:16:40 by aestevam          #+#    #+#             */
/*   Updated: 2021/10/18 22:32:08 by aestevam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*str_c;
	unsigned char	c_c;

	str_c = (char *)str;
	c_c = (unsigned char)c;
	while (*str_c)
	{
		if (*str_c == c_c)
			return (str_c);
		str_c++;
	}
	if (c_c == '\0' && *str_c == '\0')
		return (str_c);
	return (NULL);
}
