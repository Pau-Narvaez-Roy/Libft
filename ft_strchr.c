/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:04:20 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/27 12:43:40 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*copy;

	copy = (char *) s;
	while (*copy)
	{
		if (*copy == (unsigned char) c)
			return (copy);
		copy++;
	}
	if ((unsigned char) c == '\0')
		return (copy);
	return (NULL);
}
