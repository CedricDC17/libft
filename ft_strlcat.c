/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:16:51 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 18:09:49 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	while (dst[i])
		i++;
	while (i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dstlen + srclen);
}
/*
int	main(void)
{
	char	dst[16] = "Salut";
	char	src[12] = "tu vas bien";
	
	printf("dst = %s\nsrc = %s\nsizeofsrc= %ld\n", dst, src, sizeof(src));
	// printf("\nstrlcat = %ld\n", ft_strlcat(dst, src, 4));
	printf("\nstrlcat = %ld\n", strlcat(dst, src, 4));
	printf("FUNCTION\n\n");
	printf("dst = %s\nsrc = %s\n", dst, src);
	return (0);
}
*/
