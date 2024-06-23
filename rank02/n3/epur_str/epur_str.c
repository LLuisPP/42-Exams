/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:51:56 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/23 17:52:01 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	epur_str(char *str)
{
	int	i;
	int	sign;

	i = 0;

	while (str[i] == ' ' || str[i] == '\t')
		i += 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			sign = 1;
		if (!(str[i] == ' ' || str[i] == '\t'))
		{
			if (sign)
				write (1, " ", 1);
			sign = 0;
			write(1, &str[i], 1);
		}
		i += 1;;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	epur_str(argv[1]);
	write (1, "\n", 1);
	return (0);
}
