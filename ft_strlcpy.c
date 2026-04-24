/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:13:11 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 13:30:20 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s);

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dst[6] = "12345";
// 	char	src[15] = "abcdefghijklmn";

// 	printf("dst = %s\nsrc = %s\n", dst, src);
// 	printf("\nstrlcpy(len src) = %ld\n", ft_strlcpy(dst, src, 5));
// 	printf("FUNCTION\n\n");
// 	printf("dst = %s\nsrc = %s\n", dst, src);
// 	return (0);
// }
