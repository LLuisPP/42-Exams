/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:43:57 by lprieto-          #+#    #+#             */
/*   Updated: 2024/07/07 11:44:07 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = abs(end - start) + 1;
	res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{	
			res[i] = start;
			start++;
			i++;
		}		
	else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);		
}

/*
int	main(int argc, char **argv)
{
	argc++;
	argc--;
	printf("%ls", ft_range(atoi(argv[1]), atoi(argv[2])));
	return (0);
}*/

