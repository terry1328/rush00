/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:55:14 by cholee            #+#    #+#             */
/*   Updated: 2022/08/20 15:55:23 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	check_print(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int		i;
	int		j;
	char	nl;

	nl = '\n';
	i = 0;
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			check_print(i, j, x, y);
			j++;
		}
		ft_putchar(nl);
		i++;
	}
}

void	check_print(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (i == x - 1 && j == 0))
	{
		ft_putchar('A');
	}
	else if ((i == 0 && j == y - 1) || (i == x - 1 && j == y - 1))
	{
		ft_putchar('C');
	}
	else if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}
