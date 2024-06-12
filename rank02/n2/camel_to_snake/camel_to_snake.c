/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 10:47:09 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/10 19:58:30 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			write(1, "_", 1);
			c = c + 32;
		}
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	camel_to_snake(argv[1]);
	write(1, "\n", 1);
	return (0);
}
