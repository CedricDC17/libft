/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:35:09 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/21 12:39:02 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*
#include <stdio.h>
#include <strings.h>
int	main(void)
{
	char	str[7] = "abcdef";
	bzero(str, 3);

	ft_bzero(str, 3);

	//printf("hello");
	for(int i = 0; i < 7; i++)
		printf("%c\n", str[i]);
	return (0);
}
*/
