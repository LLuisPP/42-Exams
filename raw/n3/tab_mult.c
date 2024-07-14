/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 21:46:16 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/05 21:47:22 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * sign);
}

void	write_nbr(int nbr)
{
	char	str[10] = "0123456789";

	if (nbr > 9)
		write_nbr(nbr / 10);
	write(1, &str[nbr % 10], 1);
}

int	tab_mult(int	nbr)
{
	int	i;
	int	res;

	i = 1;
	while (i <= 9 && nbr <= 2147483647)
	{
		write_nbr(i);
		write(1, " x ", 3);
		write_nbr(nbr);
		write(1, " = ", 3);
		res = i * nbr;
		write_nbr(res);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

int	main(int ac, char **argv)
{
	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	tab_mult(ft_atoi(argv[1]));
	return (0);
}

