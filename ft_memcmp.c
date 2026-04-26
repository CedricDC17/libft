/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2026/04/22 17:17:10 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 17:41:28 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if ((!str1 && !str2) || n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	// const char	*s1 = "Ces phrases sont differentes ici il me semble";
	// const char	*s2 = "Ces phrases sont differentes aa il me semble";
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	
	printf("%d\n", ft_memcmp(s2, s3, 4));
	printf("%d\n", memcmp(s2, s3, 4));
	return (0);
}
*/
