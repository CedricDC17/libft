/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:40:24 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/21 12:36:11 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t          i;
	unsigned char   *str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
	char str[12] = "hello world";

	ft_memset(str, 'O', 3);
	printf("%s\n", str);
	return (0);
}*/
