/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 20:09:38 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/07 20:02:02 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int nbr) // imprime el numero si no se da el caso de fizzbuzz
{	
	char	str[10] = "0123456789";  // declaramos un array con los numeros del 0 al 9

	if (nbr > 9) // si el numero es mayor a 9 se divide entre 10 hasta que sea procesable
		write_number(nbr / 10);
	write(1, &str[nbr % 10], 1); // imprime el resto de la division por 10
}

int	main(void)
{
	int	i;

	i = 0;
	while (i <= 100)
	{
		if (i % 15 == 0) // primero el valor 15 (3 y 5), si no se hace en este orden
			write(1, "fizzbuzz", 8);  // podemos imprimir el valor incorrecto equivalente
		else if (i % 5 == 0) 
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 3 != 0 || i % 5 != 0 || i % 15 != 0)
			write_number(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
