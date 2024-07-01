/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 22:34:31 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/29 22:43:07 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n -1)) == 0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("power_o_2: %d\n", is_power_of_2(atoi(argv[1])));
	return (0);
}
