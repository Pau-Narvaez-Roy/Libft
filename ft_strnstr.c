/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 16:14:04 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/01 18:08:54 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char				*str;
	char				*to_find;
	unsigned int		i;
	unsigned int		j;
	unsigned int		max;

	str = (char *) big;
	to_find = (char *) little;
	i = 0;
	max = len;
	if (*to_find == '\0')
		return (str);
	while (str[i] && len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && (i + j) < max)
		{
			j++;
			if (to_find[j] == '\0')
				return (str + i);
		}
		i++;
		len--;
	}
	return (NULL);
}
