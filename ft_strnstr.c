/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 17:46:36 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/22 18:57:32 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*bstr;
	char	*lstr;

	i = 0;
	if (!big)
		return (NULL);
	bstr = (char *)big;
	if (!*little)
		return (bstr);
	lstr = (char *)little;
	while (bstr[i] && i < len)
	{
		if (bstr[i] == lstr[0])
		{
			j = 0;
			while (((i + j) < len) &&bstr[i + j] == lstr[j])
				j++;
			if (lstr[j] == '\0')
				return (bstr + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <bsd/string.h>

//clear && cc -g -Werror -Wextra -Wall ft_strnstr.c -lbsd
int	main(void)
{
	// const char	*s1 = "Ces phrases sont differentes ici il me semble";
	// const char	*s2 = "ici";
	char * empty = (char*)"";
	
	printf("OG = %s\nFT = %s\n", strnstr(empty, "coucou", -1), ft_strnstr(empty, "coucou", -1));
	return (0);
}

*/