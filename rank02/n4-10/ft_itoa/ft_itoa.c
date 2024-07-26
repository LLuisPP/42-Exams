/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 11:06:17 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/26 08:22:08 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char	*ft_itoa(int nbr)
{
	int	n;
	int	len;
	char	*out;

	len = 0;
	n = nbr;
	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	out = (char *)malloc(sizeof(char) * len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (nbr == 0)
	{
		out[0] = '0';
		return (out);
	}

	if (nbr < 0)
	{
		out[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		out[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (out);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	printf("main output: %s\n", ft_itoa(atoi(argv[1])));
	printf("\n");
	return (0);
}
*/
