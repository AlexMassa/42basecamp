/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 20:00:09 by falexand          #+#    #+#             */
/*   Updated: 2021/04/16 23:38:20 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i <= 46341)
	{
		if (nb - (i * i) == 0)
			return (i);
		i++;
	}
	return (0);
}
