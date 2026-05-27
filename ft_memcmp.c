/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:04:28 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/27 16:09:42 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cp;
	unsigned char	*s2cp;

	s1cp = (unsigned char *) s1;
	s2cp = (unsigned char *) s2;
	while (n)
	{
		if (*s1cp != *s2cp)
			return (*s1cp - *s2cp);
		s1cp++;
		s2cp++;
		n--;
	}
	return (0);
}
