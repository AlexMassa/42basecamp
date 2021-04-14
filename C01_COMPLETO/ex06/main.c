/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:56:55 by falexand          #+#    #+#             */
/*   Updated: 2021/04/10 03:29:21 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main(void)
{
	char str[] = "bolota";
	int	cpm;

	cpm = ft_strlen(str);
	printf("Em '%s' temos '%d' caracteres.\n", str, cpm);
	return (0);
}
