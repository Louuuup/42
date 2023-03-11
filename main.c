/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:49:51 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/10 21:13:39 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list *no_head_yet;
	t_list	*head;

	no_head_yet = ft_lstnew("Me: ");
	head = ft_lstnew("Coucou");
	head->next = ft_lstnew("comment");
	head->next->next = ft_lstnew("va?");
	ft_lstadd_back(&head, no_head_yet);
	printf("%d\n", ft_lstsize(head));
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
    t_list *l = ft_lstnew(ft_strdup("nyacat"));
	t_list *n = ft_lstnew(ft_strdup("OK"));

	ft_lstadd_back(&l, n);
	if (l->next == n && !strcmp(l->next->content, "OK"))
        printf("a");
}
					