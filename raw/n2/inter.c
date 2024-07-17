/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 20:24:48 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/17 09:39:18 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int has_char(char *str, char c)
{
    while (*str)
    {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
}

void inter(char *str1, char *str2)
{
    char printed[128] = {0};
    int i = 0;

    while (*str1)
    {
        if (has_char(str2, *str1) && !has_char(printed, *str1))
        {
            write(1, str1, 1);
            printed[i] = *str1;
            i++;
        }
        str1++;
    }
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}


/*  OTRA FORMA

#include <unistd.h>

int	is_stored(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	char	store[256] = {0};
	int	i;

	i = 0;
	while(*s1)
	{
		if (is_stored(s2, *s1) && !is_stored(store, *s1))
		{
			write(1, s1, 1);
			store[i] = *s1;
			i++;
		}
		s1++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

*/


