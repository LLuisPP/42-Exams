/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:17:25 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/10 10:17:29 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	print_wd(char *str, int wd_start, int wd_end)
{
	while (wd_start <= wd_end)
	{
		write(1, &str[wd_start], 1);
		wd_start++;
	}
}

void	rev_wstr(char *str)
{
	int	i;
	int	wd_start;
	int	wd_end;
	int	word;

	i = ft_strlen(str) - 1;
	while (i >= 0)
	{
		if (word == 1)
			write(1, " ", 1);
		word = 0;
		while (str[i] == ' ' || str[i] == '\t')
			i--;
		wd_end = i;
		while (str[i] >= 33 && str[i] <= 126 && str[i - 1] != ' ' && str[i - 1] != '\t')
		{
			i--;
			word = 1;
		}
		wd_start = i;
		if (wd_start == wd_end)
		{
			print_wd(str, wd_start, wd_start);
			write(1, " ", 1);
		}
		if (wd_start < 0)
			wd_start = 0;
		if (word != 0)
			print_wd(str, wd_start, wd_end);
		i--;
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

