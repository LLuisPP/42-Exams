/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:03:59 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/18 12:39:38 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	fprime(int nbr)
{
	int	i;

	i = 1;
	if (nbr == 1)
		printf("1");
	while(nbr >= i++)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			if (nbr == i)
				break ;
			printf("*");
			nbr /= i;
			i = 1;
		}	
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("\n");
		return (0);
	}
	fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
