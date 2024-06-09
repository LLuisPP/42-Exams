/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:09:38 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/07 20:02:02 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int nbr)
{	
	char	str[10] = "0123456789";

	if (nbr > 9)
		write_number(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 != 0 || i % 5 != 0 || i % 15 != 0)
			write_number(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
