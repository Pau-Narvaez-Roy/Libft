/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:09:20 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 16:11:07 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*to;
	const unsigned char	*from;

	if (!dest && !src)
		return (NULL);
	to = (unsigned char *)dest;
	from = (const unsigned char *)src;
	if (to > from)
	{
		while (n--)
			to[n] = from[n];
	}
	else
	{
		while (n--)
			*to++ = *from++;
	}
	return (dest);
}

/*int	main(int argc, char **argv)
{
	#include <stdio.h>
	#include <string.h>

	//char src[] = "test basic du memcpy !";
	char	buff1[22];
	char	buff2[22];

	memmove(buff1, argv[1], 22);
	ft_memmove(buff2, argv[1], 22);
	printf("1: %s\n", buff1);
	printf("2: %s\n", buff2);
	return (0);
}*/