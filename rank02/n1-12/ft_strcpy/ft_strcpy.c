/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 20:12:55 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/03 18:10:12 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s2[i] = '\0';
	return (s1);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("I String 1: %s\n", argv[1]);
	printf("I String 2: %s\n", argv[2]);
	ft_strcpy(argv[1], argv[2]);
	printf("O String 1: %s\n", argv[1]);
	printf("O String 2: %s\n", argv[2]);
	return (0);
}
*/
