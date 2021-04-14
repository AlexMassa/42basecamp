/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falexand <falexand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:39:09 by falexand          #+#    #+#             */
/*   Updated: 2021/04/13 16:04:44 by falexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z') ||
	(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (str[0] >= 97 && str[0] <= 122)
		str[0] += (65 - 97);
	i = 1;
	while (str[i] != '\0')
	{
		if (!ft_alpha(str[i - 1]) && (str[i] >= 97 && str[i] <= 122))
			str[i] += (65 - 97);
		else if (ft_alpha(str[i - 1]) && (str[i] >= 65 && str[i] <= 90))
			str[i] -= (65 - 97);
		i++;
	}
	return (str);
}
