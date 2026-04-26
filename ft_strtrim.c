/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:08:37 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/26 15:46:48 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	return (ft_substr(s1, i, j - i));
}
/*
int	main(void)
{
	char	*str;

	str = ft_strtrim("   xxxw   xxx", " x");
	// if (!str)
	printf(">%s<\n", str);
	return (0);
}
*/