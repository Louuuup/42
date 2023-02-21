/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:07:23 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 16:54:38 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long	l;
	unsigned char	*x;
	unsigned char	*y;

	l = 0;
	x = (unsigned char *)dst;
	y = (unsigned char *)src;
	dstsize--;
	while (dstsize--)
	{
		*x++ = *y++;
		l++;
	}
	while (*y++ != '\0')
	{
		l++;
	}
	*x = '\0';
	return (l);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	int s = 4;
// 	char x[] = "hellooooowooo";
// 	char y[] = "salutcommentcava";
// 	char y1[] = "salutcommentcava";
// 	printf("%lu\n", strlcpy(y, x, s));
// 	printf("%s\n", x);
// 	printf("%s\n", y);
// 	printf("\n");
// 	printf("%lu\n", ft_strlcpy(y1, x, s));
// 	printf("%s\n", x);
// 	printf("%s\n", y1);
// 	return (0);
// }
