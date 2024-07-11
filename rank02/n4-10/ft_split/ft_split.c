/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 09:17:27 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/11 21:52:39 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**s;

	i = 0;
	j = 0;
	s = malloc(sizeof(char) * 1000);
	while (str[i])
	{
		if (str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
		{
			k = 0;
			s[j] = malloc(sizeof(char) * 1000);
			while (str[i] != '\t' && str[i] != '\n' && str[i] != ' ' && str[i])
			{
				s[j][k++] = str[i++];
			}
			s[j][k] = '\0';
			printf("%s\n", s[j]);
			j++;
		}
		else
			i++;
	}
	s[j] = 0;
	return (s);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	ft_split(argv[1]);
	return (0);
}

/*

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
	int i = -1;

	while (++i < n && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int wc = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	
	char **out = (char **)malloc(sizeof(char *) * (wc + 1));
	i = 0;
	
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			ft_strncpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_split(argv[1]);
	write(1, "\n", 1);
	return (0);
}

*/
