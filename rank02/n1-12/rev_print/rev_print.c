/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:19:55 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/09 18:30:07 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_print(argv[1]);
	return (0);
}
