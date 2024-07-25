```
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
```

<div align="center">
  
|[`lvl 1`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n1-12/) | [`lvl 2`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n2-20/) | [`lvl 3`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n3-15/) | [`lvl 4`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/) |

</div>

***

<div align="center">

| [`flood_fill`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/flood_fill) | [`fprime`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/fprime) | [`ft_itoa`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_itoa)| [`ft_list_foreach`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_list_foreach) | [`ft_list_remove_if`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_list_remove_if) | <br>
| [`ft_split`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/ft_split) | [`rev_wstr`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/rev_wstr) | [`rostring`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/rostring) | [`sort_int_tab`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/sort_in_tab) | [`sort_list`](https://github.com/LLuisPP/42-Exams/tree/main/rank02/n4-10/sort_list) |

</div>