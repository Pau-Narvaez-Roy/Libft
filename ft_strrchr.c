/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:45:01 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/27 13:19:03 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strslen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s++)
		size++;
	return (size);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*copy;
	char	*found;

	copy = (char *) s;
	found = NULL;
	while (*copy)
	{
		if (*copy == (unsigned char) c)
			found = copy;
		copy++;
	}
	if (found)
		return (found);
	if ((unsigned char) c == '\0')
		return (copy);
	return (NULL);
}
