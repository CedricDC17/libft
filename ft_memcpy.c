/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:39:16 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/21 19:55:13 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (const unsigned char *)src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str1[10] = "qew";
	char	str2[10] = "huh wasup";

	//memcpy(str1, str2, 4);
	ft_memcpy(str1, str2, 4);
	printf("str1 = %s\nstr2 = %s\n", str1, str2);
}
*/
