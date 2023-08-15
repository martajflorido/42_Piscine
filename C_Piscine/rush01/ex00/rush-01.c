/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:07:20 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/19 16:20:08 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

int	main(int argc, char **charv)
{
	int tablero[4][4]; 
	int i; 
	int j; 

	i = 0; 
	j = 0; 
		while(i <= 3)
		{
			while(j <= 3)
			{
				tablero[i][j] = '0';
				write(1, &tablero[i][j], 1);
				write(1, " ", 1);
				j++;
			}
			j = 0; 
			i++;
			write(1, &"\n", 1);
			
		}

}
