/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:33:39 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/18 18:16:41 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include "list.h"

#include <stdio.h>
#include <limits.h>

typedef	struct s_list
{
	void		*data;
	struct s_list	*next;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*tmp;

	tmp = lst;
	while(lst->next != NULL)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

int	main(void)
{
	t_list	a;
	t_list	b;
	t_list	c;
	t_list	d;

	a.next = &b; 	
	b.next = &c; 	
	c.next = &d; 	
	d.next = NULL;

	a.data = 0;	
	b.data = 1;	
	c.data = 2;	
	d.data = 3;	

	sort_list(&a, 1 );
	
}
