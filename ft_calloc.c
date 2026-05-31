/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/31 17:59:51 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/31 18:35:17 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	ptr = (void *) malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	str = (char *) ptr;
	i = nmeb * size;
	while (i--)
		*str++ = '\0';
	return (ptr);
}
