/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:01:24 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/06 19:01:33 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nbr)
{
	char *str = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)argv;

	write_nbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
