/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:31:09 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/19 17:05:19 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
			i++;
		while (argv[1][i] > 32 && argv[1][i] < 127)
		{
			write(1, &argv[1][i], 1);
			i++;
			if (argv[1][i] == 32 || argv[1][i] == 9)
			{
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}


/*
#include <unistd.h>
#include <stdlib.h>

int	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || str[i] == 9)
			i++;
		while (str[i] && str[i] != 9 && str[i] != 32)
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == 9 || str[i] == 32)
				return (0);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

*/
