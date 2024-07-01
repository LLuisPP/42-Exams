/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:48:02 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/12 12:55:14 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int		i;
	unsigned int	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write (1, &bit,  1);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	print_bits(atoi(argv[1]));
	return (0);
}
