/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:32:33 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/16 14:40:30 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	j = 0;
	while(i > 0)
	{
		j = 0;
		while(argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');	
	}
}

