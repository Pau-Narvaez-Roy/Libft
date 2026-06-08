/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 12:08:03 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/08 08:26:03 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 1;
	while ((n / 10) != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static	unsigned int	ft_num(unsigned int n)
{
	if (n >= 10)
		ft_num(n / 10);
	return (n % 10);
}

static char	*ft_fillnum(char *s, unsigned int n, unsigned int size, int sign)
{
	unsigned int	i;

	i = sign;
	while (i < size)
	{
		s[i++] = ft_num(n) + '0';
		n = n / 10;
	}
	s[i] = '\0';
	return (s);
}

static char	*ft_rev_int_tab(char *tab, int size, int sign)
{
	int	i;
	int	temp;

	i = sign;
	while (size - 1 > i)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nbr;
	unsigned int	size;
	int				sign;

	size = ft_len(n);
	sign = 0;
	if (n < 0)
		sign++;
	s = (char *) malloc(sizeof(char) * (size + sign + 1));
	if (!s)
		return (NULL);
	if (n < 0)
	{
		nbr = -n;
		s[0] = '-';
	}
	else
		nbr = n;
	s = ft_fillnum(s, nbr, size + sign, sign);
	s = ft_rev_int_tab(s, size + sign, sign);
	return (s);
}
