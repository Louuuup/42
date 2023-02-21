/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 12:33:07 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/21 12:53:30 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		x;
	int		n;
	int		neg;
	char	*string;

	string = (char *)str;
	neg = 1;
	n = 0;
	x = 0;
	if (string[x] == '\0')
		return (0);
	while (string[x] == 32 || string[x] == 43)
	{
		x++;
	}
	if (string[x] == 45)
	{
		neg = -neg;
		x++;
	}
	while (string[x] >= 48 && string[x] <= 57)
	{
		n *= 10;
		n += (string[x] - 48);
		x++;
	}
	return (n * neg);
}

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char a[] = "       +242a3 25     ";
	printf("%d\n", (ft_atoi(a)));
	printf("%d\n", (atoi(a)));
	return (0);
}
