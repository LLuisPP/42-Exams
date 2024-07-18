/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:22:17 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/18 15:31:52 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int main(void)
{
	int tab[4] = {1, 5, 2, 7};
	printf ("before: %d\n", tab[0]);
	printf ("before: %d\n", tab[1]);
	printf ("before: %d\n", tab[2]);
	printf ("before: %d\n", tab[3]);
	sort_int_tab(tab, 4);
	printf ("after: %d\n", tab[0]);
	printf ("after: %d\n", tab[1]);
	printf ("after: %d\n", tab[2]);
	printf ("after: %d\n", tab[3]);
}
