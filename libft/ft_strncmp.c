/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakary <yakary@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 02:03:48 by yakary            #+#    #+#             */
/*   Updated: 2023/02/18 02:28:44 by yakary           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	int s = 2;
// 	char a[] = "Salut";
// 	char b[] = "salut";
// 	printf("%d\n", strncmp(a, b, s));
// 	printf("%d\n", ft_strncmp(a, b, s));
// }