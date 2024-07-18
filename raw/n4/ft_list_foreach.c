/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:11:00 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/18 15:02:42 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

typedef	struct s_list
{
	void		*data;
	struct s_list	*next;	
}	t_list;	

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}

void print_element(void *data)
{
    printf("%s\n",(char *) data);
}

int main(void)
{	
	t_list a;
	t_list b;
	t_list c;
	t_list d;

	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
	
	a.data = "00";
	b.data = "01";
	c.data = "02";
	d.data = "03";	
	
	ft_list_foreach( &a , print_element );
}

