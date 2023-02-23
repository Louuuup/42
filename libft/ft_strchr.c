/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:37:33 by yakary            #+#    #+#             */
/*   Updated: 2023/02/22 17:08:43 by yakary           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include "ft_strlen.c"
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if (c > 127)
		return (str);
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if ((char)c == '\0')
	{
		return (&str[ft_strlen(str)]);
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
 	char *s = "tripouille";
 	char *d1 = strchr(s, 't' + 256);
 	char *d2 = ft_strchr(s, 't' + 256);
	printf("%s\n", d1);
	printf("%s\n", d2);
}
