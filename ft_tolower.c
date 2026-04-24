/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:28:51 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 13:35:22 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	c;

	c = 'Z';
	printf("letter = %c\n", c);
	printf("\n\ntolower = %d\n", ft_tolower(c));
	c = ft_tolower(c);
	// printf("\n\ntolower = %d\n", tolower(c));
	// c = tolower(c);
	printf("FUNCTION\n\n");
	printf("letter = %c\n", c);
	return (0);
}
*/