/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:29:19 by yakary            #+#    #+#             */
/*   Updated: 2023/02/18 15:01:22 by yakary           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	char *str;

	str = (unsigned char *)s;
	
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