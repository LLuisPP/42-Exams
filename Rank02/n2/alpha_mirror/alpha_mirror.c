/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:21:13 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/11 11:36:05 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if ((c > 'a' && c <= 'm') || (c > 'A' && c <= 'M'))
		{
			c = c - 25;
			write(1, &c, 1);
		}
		if ((c > '' && c <= '') || (c > '' && c <= ''))
		{
			c = c + 25;
			
		}
		else if (c == 'a' || c <= 'a')
		{
			c = c + 25;
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
	alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}
