/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:01:47 by falexand          #+#    #+#             */
/*   Updated: 2021/04/15 19:18:22 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			*a;
	char			*b;

	i = 0;
	a = s1;
	b = s2;
	while (*b != '\0' && i < n)
	{
		if (*b != *a)
			return ((unsigned char)*a - (unsigned char)*b);
		a++;
		b++;
		i++;
	}
	if (i < n && *a != '\0')
		return ((unsigned char)*a - (unsigned char)*b);
	return (0);
}
