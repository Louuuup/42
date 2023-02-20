/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:03:18 by yakary            #+#    #+#             */
/*   Updated: 2023/02/18 23:42:51 by yakary           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char a;
	char b;

	a = (char *)s1;
	b = (char *)s2;
	while (a && b && n--)
	{
		if (a != b)
			return (a - b);
		a++;
		b++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	int x = 6;
	char a[] = "this Is a test";
	char b[] = "this is a test";
	printf("%d\n", memcmp(a, b, x));
	printf("%d\n", ft_memcmp(a, b, x));
}