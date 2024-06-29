/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:55:10 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/29 22:24:42 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int	len;
	int	i;
	char	tmp;

	i = 0;
	len = ft_strlen(str);
	while (i < len / 2) // recorremos hasta la mitad porque se intercambian 2 a 2
	{
		tmp = str[i]; // guardamos el primer char en una variable tmp
		str[i] = str[len - 1 - i]; // pasamos el c antisimetrico en la posicion recorrida
		str[len - 1 - i] = tmp; // recuperamos el valos salvado en tmp para la posicion antisimetrica
		i++; // avanzamos la posicion recorrida
	}
	printf("str: %s\n", str); // demostracion de que str esta invertido
	return (str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_strrev(argv[1]);
	write(1, "\n", 1);
	return (0);
}

