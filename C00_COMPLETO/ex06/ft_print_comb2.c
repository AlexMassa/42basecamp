/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:32:37 by falexand          #+#    #+#             */
/*   Updated: 2021/04/08 16:14:32 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_in_order(int first, int second)
{
	ft_print_char(first / 10 + '0');
	ft_print_char(first % 10 + '0');
	ft_print_char(' ');
	ft_print_char(second / 10 + '0');
	ft_print_char(second % 10 + '0');
	if (first != 98)
	{
		ft_print_char(',');
		ft_print_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 00;
	second = 00;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_print_in_order(first, second);
			second++;
		}
		first++;
	}
}
