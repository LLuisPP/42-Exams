/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:24:49 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/12 09:37:26 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (*reject != '\0')
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	ft_strcspn(argv[1],argv[2]);
	return (0);
}
