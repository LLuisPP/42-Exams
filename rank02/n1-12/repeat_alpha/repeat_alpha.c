/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 16:59:59 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/11 20:31:44 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_nbr(char c, int nbr)
{
	while (nbr > 0)
	{
		write(1, &c, 1);
		nbr--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar_nbr(str[i], str[i] + 1 - 'a');
		if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar_nbr(str[i], str[i] + 1 - 'A');
		else
			write(1, &str[i], 1);
		i++;
	}	
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	repeat_alpha(argv[1]);	
	write(1, "\n", 1);
	return (0);
}
