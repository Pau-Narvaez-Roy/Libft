/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:13:23 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 16:42:50 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	if (!dest && !src)
		return (NULL);
	to = (unsigned char *) dest;
	from = (unsigned char *) src;
	while (n--)
		*to++ = *from++;
	return (dest);
}
