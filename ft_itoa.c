/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:08:03 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/02 13:05:16 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_len(int n)
{
	int	len;
	int	res;

	len = 0;
	res = n / 10;
	while (res != 0)
	{
		n -= 10;
		res = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nbr;
	unsigned int	res;
	unsigned int	i;

	if (n == -2147483648)
	{
		i++;
		return (NULL);
	}
	if (n < 0)
	{
		n = -n;
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
	}
	res = n % 10;
	res = res + '0';
	return (s);
}

int	main(void)
{
	printf("Valor: %d", (5 / 10));
	return (0);
}
