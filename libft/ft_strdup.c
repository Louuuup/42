/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:24:43 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/23 15:34:48 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
// #include "ft_strlen.c"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		size;

	size = ft_strlen(s1);
	str = malloc(size);
	str = (char *)s1;
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char test[] = "salut toi";

// 	printf("%s\n", ft_strdup(test));
// }