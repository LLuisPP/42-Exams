/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:17:42 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/18 17:57:16 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}








// Funcion para aplicar a cada elemento (*f)
void print_element(void *data)
{
    printf("%s\n", (char *)data);
}

// Función para crear un nuevo nodo de la lista enlazada
t_list *create_elem(void *data)
{
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (!new_elem)
        return NULL;
    new_elem->data = data;
    new_elem->next = NULL;
    return new_elem;
}

int main(void)
{
    // Creación de la lista enlazada con algunos datos de ejemplo
    t_list *list = create_elem("Elemento 1");
    list->next = create_elem("Elemento 2");
    list->next->next = create_elem("Elemento 3");

    // Llamada a la función ft_list_foreach para imprimir cada elemento de la lista
    ft_list_foreach(list, print_element);

    // Liberar la memoria asignada
    t_list *tmp;
    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }

    return (0);
}
