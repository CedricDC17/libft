/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:29:45 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 16:43:37 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;
	int		tmp;

	tmp = -1;
	i = 0;
	str = (char *)s;
	while (str[i])
	{
		if (str[i] == c)
			tmp = i;
		i++;
	}
	if (str[i] == c)
		return (str + i);
	if (tmp >= 0)
		return (str + tmp);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s;
	int		c;
	char	*ptr;
	
	s = "helloe";
	c = '\0';
	// ptr = strrchr(s, c);
	ptr = ft_strrchr(s, c);
	printf("%s\n", ptr);
	return (0);
}
*/
