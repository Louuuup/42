/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ycyr-roy <ycyr-roy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:49:51 by ycyr-roy          #+#    #+#             */
/*   Updated: 2023/03/10 15:21:51 by ycyr-roy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list *no_head_yet;
	t_list	*head;

	no_head_yet = ft_lstnew("Me: ");
	head = ft_lstnew("Coucou");
	head->next = ft_lstnew("comment");
	head->next->next = ft_lstnew("va?");
	ft_lstadd_front(&head, no_head_yet);
	while (head)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}
					