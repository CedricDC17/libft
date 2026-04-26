/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:43:00 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/26 17:43:00 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char *str;
	int i;

	i = 0;

	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (c == 0)
		return (str + i);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>


int	main(void)
{
	char *s;
	// int		c;
	char *ptr;
	
	s = "tripouille";
	// c = 'e';
	ptr = ft_strchr(s, 0);
	printf("%s\n", ptr);
	ptr = strchr(s, 0);
	printf("%s\n", ptr);
	return (0);
}
 
*/