/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukaraca <tukaraca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 07:35:24 by tukaraca          #+#    #+#             */
/*   Updated: 2024/02/14 09:51:13 by tukaraca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) <= nb && i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
