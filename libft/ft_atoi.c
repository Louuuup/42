/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 16:04:57 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 20:31:44 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*string;
	int		x;
	int		n;
	int		neg;

	string = (char *)str;
	n = 0;
	neg = 1;
	x = 0;
	while (string[x] < 48 || string[x] > 57)
	{
		if (string[x] > 32 && string[x] != 43 && string[x] != 45)
			return (0);
		if (string[x] == 45)
			neg = -neg;
		x++;
	}
	while (string[x] > 47 && string[x] < 58)
	{
		n *= 10;
		n += (string[x] - 48);
		x++;
	}
	return (n * neg);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	char a[] = "8";
// 	printf("%d\n", (ft_atoi(a)));
// 	printf("%d\n", (atoi(a)));
// 	return (0);
// }
