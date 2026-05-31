/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:06:17 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/31 18:06:46 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srcdstlen;
	size_t	len;

	dstlen = ft_strlen(dst);
	srcdstlen = ft_strlen(src);
	len = dstlen;
	if (size <= dstlen)
		return (size + srcdstlen);
	while ((size - len - 1) && *src)
		dst[len++] = *src++;
	dst[len] = '\0';
	return (dstlen + srcdstlen);
}
