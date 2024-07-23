/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:48:46 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/23 11:08:25 by lprieto-         ###   ########.fr       */
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


#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int	range;
	int	*res;
	int	i;

	
	range = abs(end - start) + 1;
	res = (int *)malloc(sizeof(int) * range);
	i = 0;
	while (i <= range)
	{
		if (start <= end)
		{	
			printf("s < e: %d\n", end);	
			res[i] = end;
			end--;
			//printf("s < e: >--> %d\n", end);	
		}
		if (end <= start)
		{
			printf("e < s: %d\n", start);	
			res[i] = start;
			start--;
			//printf("e < s: >-->  %d\n", start);	
		}
		i++;
	}
	return (res);
}

int	main(int argc, char **argv)
{
	int	start;
	int	end;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	start = atoi(argv[1]);
	end = atoi(argv[2]);
	ft_rrange(start, end);
	return (0);	
}


#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int     *ft_rrange(int start, int end)
{
	int	*res;
	int	range;
	int	i;


	range = abs(end - start) + 1;
	i = 0;
	res =  (int *)malloc(sizeof(int) * range);
	while (i < range) // mal i <= range OJO !!
	{
		if (start <= end)
		{
			res[i] = end;
			end--;
		}
		else if (start >= end)
		{
			res[i] = start;
			start--;
		}
		i++;
	}
	return (res);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_rrange(atoi(argv[1]), atoi(argv[2]));
	write(1, "\n", 1);
	return (0);
}*/

