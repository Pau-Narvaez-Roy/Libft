/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:59:51 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/08 15:55:06 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	if (nmeb != 0 && (size > (((size_t) - 1) / nmeb)))
		return (NULL);
	ptr = (void *) malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	str = (char *) ptr;
	i = nmeb * size;
	while (i--)
		*str++ = '\0';
	return (ptr);
}
