/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:29:19 by yakary            #+#    #+#             */
/*   Updated: 2023/02/20 20:44:03 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n-- && str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	int chr = 's';
// 	int x = 3;
// 	char test[] = "salut";
// 	printf("%s\n", (char*)memchr(test, chr, x));
// 	printf("%s\n", (char*)ft_memchr(test, chr, x));
// }