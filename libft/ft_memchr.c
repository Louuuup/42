/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:29:19 by yakary            #+#    #+#             */
/*   Updated: 2023/02/23 21:35:36 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	if (!str)
		return (NULL);
	while (n-- && *str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

#include <string.h>
#include <stdio.h>
int main(void)
{
	int chr = ' ';
	int x = 3;
	char test[] = "salut";
	printf("%s\n", (char*)memchr(test, chr, x));
	printf("%s\n", (char*)ft_memchr(test, chr, x));
}