/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:28:49 by jose-gon          #+#    #+#             */
/*   Updated: 2023/07/23 21:28:53 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	checking_arguments(int argc)
{
	if (argc > 3)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	return (1);
}
