/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:31:09 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/05 20:02:34 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == 32 || argv[1][i] == 9 || argv[1][i] == 10
			|| argv[1][i] == 11 || argv[1][i] == 12
			|| argv[1][i] == 13)
			i++;
		while (argv[1][i] > 32 && argv[1][i] < 127)
		{
			write(1, &argv[1][i], 1);
			i++;
			if (argv[1][i] == 32 || argv[1][i] == 9 || argv[1][i] == 10
			|| argv[1][i] == 11 || argv[1][i] == 12
			|| argv[1][i] == 13)
			{
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
