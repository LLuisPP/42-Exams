/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:31:09 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/19 17:05:19 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0') // mientra exista el string
	{
		while (str[i] == 32 || str[i] == 9) // avanzamos si hay espacio o tab
			i++;
		while (str[i] && str[i] != 9 && str[i] != 32) // imprimimos mientras haya chars y no haya espacios o tabs
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == 9 || str[i] == 32) // al encontrar un espacio se acaba el programa
				return (0);
		}
	}
	return (0); // si solo hay una palabra sale del bucle habiendo acabado y acaba el programa
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}