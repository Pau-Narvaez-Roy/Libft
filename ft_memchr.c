/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:53:33 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/27 16:00:47 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;

	copy = (unsigned char *) s;
	while (n)
	{
		if (*copy == (unsigned char) c)
			return (copy);
		copy++;
		n--;
	}
	return (NULL);
}
