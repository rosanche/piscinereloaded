/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:22:20 by rosanche          #+#    #+#             */
/*   Updated: 2017/11/09 15:56:32 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int n;

	n = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb > 0)
	{
		while (n > 1)
		{
			nb = nb * n;
			n--;
		}
		return (nb);
	}
	return (0);
}
