/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:09:18 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/25 11:42:16 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = (unsigned char) c;
	return (s);
}

/*int	main(int argc, char **argv)
{
	#include <stdio.h>

	printf("%s\n", argv[1]);
	ft_memset(argv[1], 45, 5);
	printf("%s\n", argv[1]);
	return (0);
}*/