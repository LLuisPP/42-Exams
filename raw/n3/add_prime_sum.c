/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:17:58 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/11 11:18:06 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr);
}

void	write_nbr(int nbr)
{
	char str[10] = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	is_prime(int num)
{
	int	i = 2;

	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(int nbr)
{
	int	psum;

	psum = 0;
	while (nbr >= 0)
	{
		if(is_prime(nbr) == 1)
			psum += nbr;
		nbr--;
	}
	write_nbr(psum);
}
	
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "0\n", 2);
		return (0);
	}
	add_prime_sum(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}

