/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:28:28 by jose-gon          #+#    #+#             */
/*   Updated: 2023/07/23 21:28:31 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	checking_array(char *buf, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] >= '0' && str[i] <= '9')
			i++;
		if (!(str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
		{	
			write (1, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}
