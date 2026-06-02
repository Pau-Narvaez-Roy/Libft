/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnarvaez <pnarvaez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 18:36:29 by pnarvaez          #+#    #+#             */
/*   Updated: 2026/06/02 12:08:33 by pnarvaez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numrow(char const *s, char c)
{
	unsigned int	letter;
	unsigned int	i;
	int				word;

	letter = 0;
	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && word == 0)
		{
			letter++;
			word = 1;
		}
		else if (s[i] == c)
			word = 0;
		i++;
	}
	return (letter);
}

static int	ft_len(char const *s, char c)
{
	unsigned int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char const	*ft_nextword(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char			**list;
	unsigned int	i;
	unsigned int	j;
	unsigned int	words;

	if (!s)
		return (NULL);
	words = ft_numrow(s, c);
	list = (char **) malloc(sizeof(char *) * (words + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = ft_nextword(s, c);
		list[i] = (char *) malloc(sizeof(char) * (ft_len(s, c) + 1));
		if (!list[i])
			return (NULL);
		j = 0;
		while (*s && *s != c)
			list[i][j++] = *s++;
		list[i++][j] = '\0';
	}
	list[i] = (char *) 0;
	return (list);
}
