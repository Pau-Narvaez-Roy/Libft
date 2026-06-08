/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 17:06:17 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/08 12:43:30 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	while ((size - len - 1) && *src)
		dst[len++] = *src++;
	dst[len] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
