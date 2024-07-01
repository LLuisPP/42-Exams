/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:15:03 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/17 09:15:21 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	pgcd(int nb1, int nb2)
{
	if (nb1 > 0 && nb2 > 0)
	{
		while (nb1 != nb2)
		{
			if (nb1 > nb2)
				nb1 -= nb2;
			else
				nb2 -= nb1;
		}
		printf("%d", nb1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
		return (0);
	}
	pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}
