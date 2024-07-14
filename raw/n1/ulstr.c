/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:57:23 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/11 11:19:07 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int	i;
	char	c;

	i = 0;
	while(str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			c = c - 32;
			write(1, &c, 1);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			c = c + 32;
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
	ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
