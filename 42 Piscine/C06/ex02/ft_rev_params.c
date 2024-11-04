/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tukaraca <tukaraca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 00:28:58 by tugcemiraya       #+#    #+#             */
/*   Updated: 2024/02/14 12:56:15 by tukaraca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	while (i != 1)
	{
		j = 0;
		while (argv[i - 1][j])
		{
			write(1, &argv[i - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
}
