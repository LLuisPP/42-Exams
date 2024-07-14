/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 09:40:31 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/12 10:00:06 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int	len;
	char	*copy;
	int	i;

	len = 0;
	i = 0;
	while (*src != '\0')
		len++;
	printf("len %d\n", len);
	copy = malloc(sizeof(*copy) * (len +1));
	if (copy != NULL)
	{
		while (src[i] != '\0')
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
	}	
	return (copy);
}

int	main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_strdup(argv[1]);
	return (0);
}
