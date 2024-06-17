/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:03:38 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/17 21:44:20 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int 	len;
	int	n;
	int	sign;
	char 	*output;

	len = 0;
	n = nbr;
	sign = 1;
	
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (NULL); 
	if (nbr <= 0)
	{
		sign = -1;
		len++;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}



	output = (char *)malloc(sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	


	output[len] = '\0';

	while (nbr != 0)
	{
		output[--len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (sign == -1)
		output[0] = '-';

	return (output);
}

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
