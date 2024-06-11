/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:12:57 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/11 18:21:48 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	printf("%d\n", s2[i] - s1[i]);
	return (s2[i] - s1[i]);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	ft_strcmp(argv[1], argv[2]);
	return (0);
}
