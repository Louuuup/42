/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:06:56 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/20 20:44:51 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	size_t	x;

	x = 0;
	size = ft_strlen(needle);
	if (size == 0)
		return ((char *)haystack);
	while (x <= len - size)
	{
		if (ft_strncmp(&haystack[x], needle, size) == 0)
			return ((char *)&haystack[x]);
		x++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include "ft_strlen.c"
// #include "ft_strncmp.c"

// int	main(void)
// {
// 	int	x = 10;
// 	char str[] = "Never gonna give you up";
// 	char target[] = "onna";
// 	printf("%s\n", ft_strnstr(str, target, x));
// 	printf("expected:\n");
// 	printf("%s\n", strnstr(str, target, x));
// }
