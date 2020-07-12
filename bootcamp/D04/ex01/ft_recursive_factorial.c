/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 09:47:54 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/12 09:54:03 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <  0 || nb > 12)
		return 0;
	else if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}


