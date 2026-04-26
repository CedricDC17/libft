/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:48:49 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/26 17:37:44 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	cw(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			count++;
		}
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	size_t	nlen;

	i = 0;
	res = malloc((cw(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (!*s)
			break ;
		nlen = 0;
		while (s[nlen] != c && s[nlen])
			nlen++;
		res[i++] = ft_substr(s, 0, nlen);
		s += nlen;
	}
	res[i] = NULL;
	return (res);
}
/*
int	main(void)
{
	char	str[] = "q    Hello how are you doing tod ay?    q";
	char	c;
	char	**res;
	int		i;

	c = ' ';
	res = ft_split(str, c);
	i = 0;
	while (res[i])
	{
		printf("res[i] = %s\n", res[i]);
		i++;
	}
}
*/