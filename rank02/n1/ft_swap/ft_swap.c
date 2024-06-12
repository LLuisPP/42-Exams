/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lprieto- <lprieto-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 11:45:32 by lprieto-          #+#    #+#             */
/*   Updated: 2024/06/09 16:58:44 by lprieto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	
	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = *str - '0';
		str++;
	}
	return (result * sign);
}

void	ft_swap(int *a, int *b)
{
	int	*temp;

	temp = a;
	a = b;
	b = temp;
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	
	int	x;
	int	y;
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	printf("pointer before: %d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("pointer after: %d, %d\n", x, y);
	return (0);
}
