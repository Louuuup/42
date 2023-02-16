/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:44:31 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/16 11:48:37 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char *ft_gotolast(char *ptr)
{
	while (*++ptr)
	{
	}
	return (ptr);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*end1;

	end1 = ft_gotolast(dst);
	while(dstsize--)
	{
		*dst++ = *src++;
	}
	return (dstsize);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int n = 3;
	char x[] = "hellooooowooo";
	char x1[] = "hellooooowooo";
	char y[] = "salutcommentcava";
	char y1[] = "salutcommentcava";
	printf("%lu\n", strlcat(x, y, 21));
	printf("%s\n", x);
	printf("%s\n", y);
	printf("\n");
	printf("%lu\n", ft_strlcat(x1, y1, 21));
	printf("%s\n", x1);
	printf("%s\n", y1);
	return (0);
}
