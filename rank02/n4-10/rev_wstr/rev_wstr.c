/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:39:16 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/07 12:39:20 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len])
		len++;
	return (len);
}

void	rev_wstr(char *str)
{
	int	i;
	int	f;
	int	len;
	int	mark;
	
	i = 0;
	len = ft_strlen(str);
	while (len >= 0)
	{
		while (str[len] == '\0' || str[len] == ' ' || str[len] == '\t')
			len--;
		f = len;
		while (str[len] && str[len] != ' ' && str[len] != '\t')
			len--;
		i = len + 1;
		mark = i;
		while (i <= f)
		{
			write(1, &str[i], 1);
			i++;
		}
		if (mark != 0)
			write(1, " ", 1);
	}

}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}

