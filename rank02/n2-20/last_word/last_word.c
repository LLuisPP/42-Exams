/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:48:23 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/09 17:36:01 by lprieto-         ###   ########.fr       */
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

/* ANOTHER WAY

#include <unistd.h>

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	last_word(char *str)
{
	int	ini;
	int	fin;
	int	len;

	len = ft_strlen(str) - 1;
//	printf("LEN: %d\n", len);
	ini = 0;
	fin = 0;
	while (len >= 0)
	{
		while (str[len] == ' ' || str[len] == '\t')
			len--;
		fin = len;
//		printf("FINAL PALABRA: %d\n", fin);
		while (str[len] >= 32 && str[len] <= 126 && str[len - 1] != ' ' && str[len - 1] != '\t')
			len--;
		ini = len;
//		printf("INICIO PALABRA:%d\n", ini);
		break ;
	}
	while (ini <= fin)
	{
		write(1, &str[ini], 1);
		ini++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	last_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

*/
