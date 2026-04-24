/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:20:29 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/21 18:48:24 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*str1;
	const unsigned char	*str2;

	if (n == 0)
		return (dest);
	i = 0;
	str1 = (unsigned char *)dest;
	str2 = (const unsigned char *)src;
	if (dest > src)
	{
		while (--n > 0)
		{
			str1[n] = str2[n];
		}
		str1[n] = str2[n];
		return (dest);
	}
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str1[10] = "abcdef";
	char	str2[10] = "ghijkl";

	ft_memmove(str1, str2, 2);
	printf("str1 = %s\nstr2 = %s\n", str1, str2);
	return (0);
}
*/
