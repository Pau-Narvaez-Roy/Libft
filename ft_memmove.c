/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:09:20 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 16:42:08 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;

	if (!dest && !src)
		return (NULL);
	to = (unsigned char *)dest;
	from = (const unsigned char *)src;
	if (to > from)
	{
		while (n--)
			to[n] = from[n];
	}
	else
	{
		while (n--)
			*to++ = *from++;
	}
	return (dest);
}
