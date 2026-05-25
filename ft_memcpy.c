/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:13:23 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 15:05:54 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;

	if (!dest && !src)
		return (NULL);
	to = (unsigned char *) dest;
	from = (unsigned char *) src;
	while (n--)
		*to++ = *from++;
	return (dest);
}

/*int	main(int argc, char **argv)
{
	#include <stdio.h>
	#include <string.h>

	//char src[] = "test basic du memcpy !";
	char	buff1[22];
	char	buff2[22];

	//memcpy(buff1, argv[1], 22);
	ft_memcpy(buff2, argv[1], 22);
	printf("1: %s\n", buff1);
	printf("2: %s\n", buff2);
	return (0);
}*/