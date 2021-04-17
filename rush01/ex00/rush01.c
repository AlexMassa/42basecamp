/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:34:54 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/05 16:40:36 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a);

void	rush(int x, int y)
{
	int col;
	int ln;

	ln = 1;
	while (ln <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && ln == 1) ||
			(col == x && ln == y && y != 1 && x != 1))
				ft_putchar(47);
			else if ((ln == 1 && col == x) || (ln == y && col == 1))
				ft_putchar(92);
			else if (ln == 1 || col == 1 || ln == y || col == x)
				ft_putchar(42);
			else
			{
				ft_putchar(32);
			}
			col++;
		}
		ft_putchar(10);
		ln++;
	}
}
