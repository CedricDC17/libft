/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedurget <cedurget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:40:29 by cedurget          #+#    #+#             */
/*   Updated: 2026/04/26 20:29:48 by cedurget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char	*ft_itoa(int n)
{
	long	res;
	int		i;
	char	*str;

	i = 0;
	res = n;
	if (n <= 0)
		n = -n + (0 * i++);
	while (n != 0 || i == 0)
		n /= 10 + (0 * i++);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (res < 0)
	{
		str[0] = '-';
		res = -res;
	}
	str[i--] = '\0';
	while (res != 0)
	{
		str[i--] = (res % 10) + '0';
		res /= 10;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(-12));
	return (0);
}

