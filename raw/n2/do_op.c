/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:00:21 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/11 17:47:50 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	do_op(int nbr1, char op, int nbr2)
{
	if (op == '+')
		printf ("%d\n", nbr1 + nbr2);
	if (op == '-')
		printf ("%d\n", nbr1 - nbr2);
	if (op == '*')
		printf ("%d\n", nbr1 * nbr2);
	if (op == '/')
		printf ("%d\n", nbr1 / nbr2);
	if (op == '%')
		printf ("%d\n", nbr1 % nbr2);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	do_op(atoi(argv[1]), argv[2][0], atoi(argv[3]));
	return (0);
}
