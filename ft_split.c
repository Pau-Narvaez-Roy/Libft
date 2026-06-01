/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:36:29 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/01 18:55:20 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	numrow(char const *s, char c)
{
	unsigned int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char			**list;
	unsigned int	i;

	if (!s)
		return (NULL);
	while (*s)
	{
		i = 0;
		while (s[i] != c && *s)
			i++;
		list = (char *) malloc(sizeof(char) * (i + 1));
	}
}
