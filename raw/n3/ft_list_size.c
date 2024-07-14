#include <unistd.h>

#include <stdlib.h>
#include <stdio.h>

// -----------------------------------------------------

typedef struct	s_list
{
	struct s_list	*next;
	void		*data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int	list_size;

	list_size = 0;
	if (begin_list == 0)
	{
		list_size = 0;
		return (list_size);
	}
	else
		while (begin_list)
		{
			begin_list = begin_list->next;
			list_size++;
		}
	return (list_size);
}
// -------------------------------------------------------

t_list *create_node(void *data)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));

	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	return (new_node);
}

int	main(void)
{
    t_list *node1 = create_node("Nodo 1"); // Creamos nodos (los que quieras)
    t_list *node2 = create_node("Nodo 2");
    t_list *node3 = create_node("Nodo 3");

    node1->next = node2;   // Enlazamos los nodos para que la lista sea efectiva
    node2->next = node3;
    node3->next = NULL;

    int size = ft_list_size(node1); // meto el valor que me retornara la funcion en un int
    printf("List_size is: %d\n", size);

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
