/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:04:28 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/08 08:27:07 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;

	s1cpy = (unsigned char *) s1;
	s2cpy = (unsigned char *) s2;
	while (n)
	{
		if (*s1cpy != *s2cpy)
			return (*s1cpy - *s2cpy);
		s1cpy++;
		s2cpy++;
		n--;
	}
	return (0);
}
