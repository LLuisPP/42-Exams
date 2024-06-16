/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:48:23 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/16 11:46:57 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *s)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (s[i])
	{
		if (s[i] == ' ' && s[i + 1] >= 33 && s[i + 1] <= 126)
			h = i + 1;
		i++;
	}
	while (s[h] >= 33 && s[h] <= 126)
	{
		write(1, &s[h], 1);
		h++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
