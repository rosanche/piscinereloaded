/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:00:57 by rosanche          #+#    #+#             */
/*   Updated: 2017/11/09 17:13:42 by rosanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;
	int i;

	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			ft_putchar(argv[n][i]);
			i++;
		}
		ft_putchar('\n');
		n++;
	}
	return (0);
}
