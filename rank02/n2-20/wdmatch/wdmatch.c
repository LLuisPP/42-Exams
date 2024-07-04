/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:00:15 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/04 21:14:44 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	wdmatch(char *str, char *pieces)
{
	int	i;
	int	j;
	
	i = 0;
	j = 0;
	while (str[i] && pieces[j])
	{
		if (pieces[j] == str[i])
			i++;
		j++;
	}
	if (str[i] == '\0')
		ft_putstr(str);
	else
		return ;
}

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	wdmatch(argv[1], argv[2]);	
	write(1, "\n", 1);
	return (0);
}
