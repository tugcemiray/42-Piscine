/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makboga <makboga@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 00:18:16 by zfahjan           #+#    #+#             */
/*   Updated: 2024/01/28 21:12:55 by makboga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern void	ft_putchar(char c);

void	print_line(int x, char first_and_last, char middle)
{
	int	i;

	i = 1;
	while (x >= i)
	{
		if (i == 1 || i == x)
		{
			ft_putchar(first_and_last);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

int	error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "ERROR: value cant be smaller than 1 \n", 37);
		return (1);
	}
	return (0);
}

void	rush(int x, int y)
{
	int	j;

	while (error(x, y) == 0)
	{
		j = 1;
		while (y >= j)
		{
			if (j == y || j == 1)
			{
				print_line(x, 'o', '-');
			}
			else
			{
				print_line(x, '|', ' ');
			}
			j++;
		}
		break ;
	}
}
