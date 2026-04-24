/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:47:49 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 16:54:37 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1[i] && !s2[i]) || n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s1 = "Ces phrases sont differentes ici il me semble";
	const char	*s2 = "Ces phrases sont differentes la il me semble";

	printf("%d\n", ft_strncmp(s1, s2, 50));
	printf("%d\n", strncmp(s1, s2, 50));
	return (0);
}
*/