/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 12:45:01 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/08 15:33:08 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
