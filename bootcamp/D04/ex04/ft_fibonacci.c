/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndooge <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:08:13 by ndooge            #+#    #+#             */
/*   Updated: 2020/07/12 10:14:36 by ndooge           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return -1;
	if (index < 1)
		return 0;
	if (index < 3)
		return 1;
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));

}

