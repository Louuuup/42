/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:37:33 by yakary            #+#    #+#             */
/*   Updated: 2023/02/17 19:57:02 by yakary           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
	char *str;
	
	*str = *s;
	while (*str++)
	{
		if (*str == c)
			return (str);
	}
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	int x = 'o';
	char *str = "Hello World";
	char *str1 = "Hello World";
	printf("%s\n", strrchr(str, x));
	printf("%s\n", strrchr(str1, x));
}
