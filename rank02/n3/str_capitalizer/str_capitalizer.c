/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 18:45:50 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/19 18:46:15 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	str_capitalizer(char *s)
{
	int	i;

	i = 0;
	while (s[i] == ' ' || s[i]  == 9)
		i++;
	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
		write(1, &s[0], 1);
		i++;
	}
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' ' || s[i -1] == '\t'))
			s[i] -= 32;
		write(1, &s[i], 1);
		i++;
	}

}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
