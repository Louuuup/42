/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:44:13 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/28 12:41:19 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_swap(char *a, char *b);

// char	*ft_strtrim(char const *s1, char const *set)
// {

// }

void	rm_char(char *str, size_t lenght)
{
	int	i;

	i = 0;
	while (i != lenght - 1)
	{
		ft_swap(&str[i], &str[i + 1]);
		i++;
	}
	printf("%c\n", str[i]);
	// str[i] = '\0';
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	a = b;
	b = &temp;
}

#include "ft_strlen.c"
#include <stdio.h>

int main(void)
{
	char *str = "salout";
	char *ptr;
	ptr = str + 4;
	printf("str: %s\n", str);
	printf("ptr: %s\n", ptr);
	rm_char(str, ft_strlen(str));
	printf("str: %s\n", str);
	printf("ptr: %s\n", ptr);
}