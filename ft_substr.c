/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:17:19 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/23 19:19:17 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sublen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	sublen = slen - start;
	if (len < sublen)
		sublen = len;
	sub = malloc(sublen + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sublen + 1);
	return (sub);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = "Hello World";
	printf("%s\n", ft_substr(s, 6, 3));
	printf("%s\n", ft_substr(s, 6, 20));
	printf("%s\n", ft_substr(s, 20, 3));
	printf("%s\n", ft_substr(s, 0, 0));
	s = "";
	ft_substr(NULL, 0, 3);
	return (0);
}

*/