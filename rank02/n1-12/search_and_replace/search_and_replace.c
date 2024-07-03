/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 08:09:15 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/03 10:36:50 by lprieto-         ###   ########.fr       */
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

void	search_and_replace(char *str, char *in, char *out)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == in[0])
			write(1, &out[0], 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4 || ft_strlen(argv[2]) != 1 || ft_strlen(argv[3]) != 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	search_and_replace(argv[1],argv[2],argv[3]);
	write(1, "\n", 1);
	return (0);
}


/*
OTRA FORMA

void    search_and_replace(char *str, char *find, char *rep)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == find[0])
            write(1, &rep[0], 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 4 || argv[2][1] || argv[3][1])
    {
        write(1, "\n", 1);
        return (0);
    }
    search_and_replace(argv[1], argv[2], argv[3]);
    write(1, "\n", 1);
    return (0);
}
*/