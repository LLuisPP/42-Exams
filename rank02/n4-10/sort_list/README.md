```
Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}
```

<div align="center">
  
|[`lvl 1`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n1-12/) | [`lvl 2`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n2-20/) | [`lvl 3`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n3-15/) | [`lvl 4`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/) |

</div>

***

<div align="center">

| [`flood_fill`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/flood_fill) | [`fprime`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/fprime) | [`ft_itoa`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_itoa)| [`ft_list_foreach`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_list_foreach) | [`ft_list_remove_if`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_list_remove_if) | <br>
| [`ft_split`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_split) | [`rev_wstr`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/rev_wstr) | [`rostring`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/rostring) | [`sort_in_tab`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/sort_in_tab) | [`sort_list`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/sort_list) |

</div>