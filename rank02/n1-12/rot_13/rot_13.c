/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:31:10 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/17 10:30:05 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		{	
			c = c + 13;
			write(1, &c, 1);
		}
		else if ((c <= 'z' && c > 'm') || (c <= 'Z' && c > 'M'))
		{
			c = c - 13;
			write(1, &c, 1);
		}
		else
			write(1, &str[i], 1);
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
	ft_rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
