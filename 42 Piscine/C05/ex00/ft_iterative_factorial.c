/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukaraca <tukaraca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 07:34:15 by tukaraca          #+#    #+#             */
/*   Updated: 2024/02/14 09:53:10 by tukaraca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		while (nb != 1)
		{
			result = result * (nb);
			nb--;
		}
	}
	else if (nb < 0)
		result = 0;
	return (result);
}
