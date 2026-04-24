/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:13:03 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 13:28:33 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
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
	
	c = '1';
	printf("letter = %c\n", c);
	// printf("\n\ntoupper = %d\n", ft_toupper(c));
	// c = ft_toupper(c);
	printf("\n\ntoupper = %d\n", toupper(c));
	c = toupper(c);
	printf("FUNCTION\n\n");
	printf("letter = %c\n", c);
	return (0);
}
	*/