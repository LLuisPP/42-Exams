/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ped_ft_strpbrk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 21:37:28 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/29 21:53:46 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2) // si uno de los dos no existe
		return (0);
	while (*s1) // mientras recorremos el s1
	{
		i = 0;
		while (s2[i]) // y a su vez por cada char recorremos el s2
		{
			if (*s1 == s2[i]) // si hay una coincidencia entre s1 y s2
				return ((char *) s1); // devolvemos el puntero a s1 
			i++;
		}
		s1++;
	}
	return (NULL); // si no hay ocurrencia de s2 en s1, devuelve NULL (ver man)
}



