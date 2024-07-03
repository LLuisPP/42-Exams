/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:03:05 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/07 20:09:02 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') // el bucle recorre el string imprimiendo cada char
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 0)
		return (0);
	ft_putstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}