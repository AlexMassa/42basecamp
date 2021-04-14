/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 01:24:34 by falexand          #+#    #+#             */
/*   Updated: 2021/04/11 01:28:37 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int i;
	int *t;

	i = 42;
	t = &i;
	ft_ft(t);
	printf("%d\n", i);
	return (0);
}
