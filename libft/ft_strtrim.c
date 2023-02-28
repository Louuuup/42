/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 11:44:13 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/02/28 16:11:07 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	rm_char(char *str);
void	lf_char(char *str, char lf);
void	ft_swap(char *a, char *b);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	lf;
	char	*s2;
	size_t	set_len;
	size_t	i;

	i = 0;
	s2 = ft_strdup(s1);
	set_len = ft_strlen(set);
	while (set[i])
	{
		lf = (char)set[i];
		lf_char(s2, lf);
		i++;
	}
	ft_memchr(s2, lf, ft_strlen(s2));
	return (s2);
}

void	rm_char(char *str)
{
	int	lenght;
	int	i;

	i = 0;
	lenght = ft_strlen(str);
	while (i < lenght - 1)
	{
		ft_swap(&str[i], &str[i + 1]);
		i++;
	}
	str[i] = '\0';
}

void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	lf_char(char *str, char lf)
{
	int		len;
	char	*ptr;

	len = ft_strlen(str);
	while (len >= 0)
	{
		ptr = ft_memchr(&str[len], lf, ft_strlen(&str[len]));
		if (ptr)
			rm_char(ptr);
		len--;
	}
}

#include "ft_strlen.c"
#include <stdio.h>
#include "ft_memcmp.c"
#include "ft_memchr.c"
#include "ft_strdup.c"
#include "ft_strlcpy.c"

int main(void)
{
	char str[] = "salut comment vas-tu?";
	char rm[] = "tsv";
	printf("Result: %s\n", ft_strtrim(str, rm));
}