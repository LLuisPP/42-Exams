/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 12:51:02 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/12 12:51:54 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

void	rostring(char *str)
{

 	char	*start;
    	char	*end;

	while (*str == ' ' || *str == '\t')
       	    str++;
        start = str;
        while (*str && *str != ' ' && *str != '\t')
            str++;
        end = str;
        while (*str == ' ' || *str == '\t')
            str++;
        if (*str)
	{
            while (*str)
            {
                if (*str == ' ' || *str == '\t')
                {
                    while (*str == ' ' || *str == '\t')
                        str++;
                    if (*str)
                        write(1, " ", 1);
                }
                else
                {
                    write(1, str, 1);
                    str++;
                }
            }
            write(1, " ", 1);
        }
        while (start < end)
    	{
		write(1, start, 1);
		start++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
