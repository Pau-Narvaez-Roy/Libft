/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 12:14:32 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/05/22 08:23:08 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
			return (0);
		str++;
	}
	return (1);
}

int main(void)
{
	#include <stdio.h>
	#include <ctype.h>
	
	printf("%d", ft_isalpha("a"));
	printf("\n");
	printf("%d", isalpha(300));
	return (0);
}