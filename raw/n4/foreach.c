/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foreach.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:11:00 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/18 13:11:03 by lprieto-         ###   ########.fr       */
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

int	ft_str_cmp(char *str1, char *str2)
{
	if (str1 == NULL && str2 == NULL)
		return (0);
	else if (str1 == NULL)
		return (0 - *str2);
	else if (str2 == NULL)
		return (*str1 - 0);

	while(*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
	}
	return (*str1 - *str2);
}

t_list	ft_sort_list(t_list *begin, int (*cmp)(lst))
{
	while (&begin)
x	{
		printf("note A %s node B%s\n", begin->data, begin->next->data);
		/*if (ft_str_cmp(begin->data, begin->next->data) > 0)
		{
			tmp =  begin;
			begin = begin->next;
			begin->next = tmp;
		}	*/		
		begin = begin->next;
	}
	return (begin);
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


	t_list *begin_ptr = &a;
//	t_list **begin_ptr_ptr = &begin_ptr;
	
//	ft_list_foreach( &a , print_element );
//	 ft_list_foreach( *begin_ptr_ptr, print_element );
//	 ft_list_foreach( begin_ptr, print_element );
	ft_sort_list(begin_ptr, ft_str_cmp() )
}

