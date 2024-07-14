/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:52:51 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/09 20:08:02 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'b' && c <= 'z') || (c >= 'B' && c <= 'Z'))
		{
			c = str[i] - 1;
			write(1, &c, 1);
		}
		else if (c == 'a' || c == 'A')
		{
			c = str[i] + 25;
			write(1, &c, 1);
		}
		else
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
	rotone(argv[1]);
	write(1, "\n", 1);
	return(0);
}
