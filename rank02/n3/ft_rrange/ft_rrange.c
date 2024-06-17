/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:48:46 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/17 13:00:33 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	*range;
	int	i;
	int	n;
	int	count;

	count = 1;
	i = 0;
	n = end - start;
	if (n < 0)
		n = n * (-1);
	n++;
	range = (int *)malloc(sizeof(int) * n);
	if (!range)
	{	
		free(range);
		return (0);
	}
	else
	{
		if (start < end)
			count = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + count;
			i++;
		}
	}
	return (range);	
}

/*
int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_rrange(atoi(argv[1]), atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}*/
