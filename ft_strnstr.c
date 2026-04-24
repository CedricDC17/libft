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
	bstr = (char *)big;
	lstr = (char *)little;
	if (!little[0])
		return (bstr);
	while (i < len)
	{
		if (bstr[i] == lstr[0])
		{
			j = 0;
			while (bstr[i + j] == lstr[j] && ((i + j) < len))
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
	const char	*s1 = "Ces phrases sont differentes ici il me semble";
	const char	*s2 = "ici";

	printf("OG = %s\nFT = %s\n", strnstr(s1, s2, 32), ft_strnstr(s1, s2, 32));
	return (0);
}
*/
