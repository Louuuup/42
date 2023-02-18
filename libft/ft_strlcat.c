/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:44:31 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/17 18:21:03 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(const char *s);
// {
// 	int	x;

// 	x = 0;
// 	if (s[0] == '\0')
// 		return (0);
// 	while (s[x] != '\0')
// 	{
// 		x++;
// 	}
// 	return (x);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	slength;
	size_t	dlength;

	dlength = 0;
	j = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	while (*dst++)
		dlength++;
	slength = ft_strlen(src);
	if (dstsize == 0 || dstsize <= dlength)
		return (slength + dstsize);
	while (src++ && j < dstsize - 1)
	{
		*dst++ = *src++;
		j++;
	}
	*dst = '\0';
	return (dlength + slength);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int n = 3;
// 	char x[] = "hellooooowooo";
// 	char x1[] = "hellooooowooo";
// 	char y[] = "salutcommentcava";
// 	char y1[] = "salutcommentcava";
// 	printf("%lu\n", strlcat(x, y, n));
// 	printf("%s\n", x);
// 	printf("%s\n", y);
// 	printf("\n");
// 	printf("%lu\n", ft_strlcat(x1, y1, n));
// 	printf("%s\n", x1);
// 	printf("%s\n", y1);
// 	return (0);
// }
