/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 17:06:28 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/24 17:52:26 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup (""));
	if ((int)len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = malloc(len * sizeof(char));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], len);
	return (sub);
}

// #include <stdio.h>
// #include "ft_strlcpy.c"
// #include "ft_strlen.c"
// #include "ft_strdup.c"
// int main(void)
// {
// 	char *test = "Hi can you copy me?";
// 	printf("%s\n", ft_substr(test, 11, 8));
// }
