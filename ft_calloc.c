/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 13:44:48 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/23 18:10:20 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	if (n == 0 || size == 0)
	{
		str = malloc(0);
		return (str);
	}
	if (n * size > INT_MAX)
		return (NULL);
	str = malloc(n * size);
	if (!str)
		return (NULL);
	ft_bzero(str, n);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_calloc(10, 1);
	// for (size_t i = 0; i < 10; i++)
	// {
		// 	str[i] = i;
		// }
		for (size_t i = 0; i < 10; i++)
		{
			printf("%c\n", str[i]);
		}
		return (0);
	}
*/
