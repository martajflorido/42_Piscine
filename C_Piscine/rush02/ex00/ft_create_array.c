/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:27:12 by jose-gon          #+#    #+#             */
/*   Updated: 2023/07/23 21:27:15 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_numeric(char *dicc, int i)
{
	while (dicc[i])
	{
		if (dicc[i] < 0 || dicc[i] > 9)
			return (1);
		else
			return (0);
	}
	return (0);
}

int	is_alpha(char *dicc, int i)
{
	while (dicc[i])
	{
		if (dicc[i] >= 'a' && dicc[i] <= 'z')
			return (1);
		else
			return (0);
	}
	return (0);
}

void	number_name(char *dicc, char *to_find)
{
	int	i;		

	i = 0;
	while (dicc[i])
	{
		if ((dicc[i] == to_find[0] && (to_find[1] == '\0'))
			|| (dicc[i] == to_find[0] && (dicc[i + 1] == to_find[1])))
		{
			while (!(is_alpha(dicc, i)))
				i++;
			while (is_alpha(dicc, i) == 1)
			{
				write (1, &dicc[i], 1);
				i++;
			}
			return ;
		}
		i++;
	}
}
