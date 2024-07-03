/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:12:45 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/03 19:08:58 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	saved_char(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	char	saved[256] = {0};

	i = 0;
	while (*s1)
	{
		if (!saved_char(saved, *s1))
		{
			saved[i] = *s1;
			write(1, s1, 1);
			i++;		
		}
		s1++;
	}
	while (*s2)
	{
		if (!saved_char(saved, *s2))
		{
			saved[i] = *s2;
			write(1, s2, 1);
			i++;
		}
		s2++;
	}
}

int	main(int argc, char ** argv)
{
	if (argc != 3)
	{
		write(1, "/n", 1);
		return (0);
	}
	ft_union(argv[1], argv[2]);
	write(1, "/n", 1);
	return (0);
}
