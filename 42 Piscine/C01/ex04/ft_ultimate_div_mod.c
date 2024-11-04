/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukaraca <tukaraca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:54:30 by tukaraca          #+#    #+#             */
/*   Updated: 2024/02/07 21:56:36 by tukaraca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	bolum;
	int	kalan;

	bolum = *a / *b;
	kalan = *a % *b;
	*a = bolum;
	*b = kalan;
}
