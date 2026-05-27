/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:06:17 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/27 11:45:16 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strdstlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s++)
		size++;
	return (size);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srcdstlen;
	size_t	len;

	dstlen = ft_strdstlen(dst);
	srcdstlen = ft_strdstlen(src);
	len = dstlen;
	if (size <= dstlen)
		return (size + srcdstlen);
	while ((size - len - 1) && *src)
		dst[len++] = *src++;
	dst[len] = '\0';
	return (dstlen + srcdstlen);
}
