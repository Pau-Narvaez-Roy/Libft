/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 16:32:15 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 17:05:44 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;

	srcsize = 0;
	while (src[srcsize])
		srcsize++;
	if (size <= 0)
		return (srcsize);
	while (((size--) - 1) && *src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (srcsize);
}
