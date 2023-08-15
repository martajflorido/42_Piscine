/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:20:44 by yemoreno          #+#    #+#             */
/*   Updated: 2023/07/08 12:59:00 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush(int x, int y);

void	ft_dibuja_linea(char a, char b, int n);

void	rush(int x, int y)
{
	int	contay;

	contay = 0;
	//Bucle para ir linea a linea
	while (contay < y)
	{
        //comprobamos en qué parte de la linea estamos, si es la primera o la ultima dibujamos de una forma, si no, de otra.
		if (contay == 0 || contay == y - 1)
        {
            ft_dibuja_linea('o', '-', x);
        }
        else
        {
            ft_dibuja_linea('|', ' ', x);
        }
        //aumentamos contay para seguir en la siguiente linea.
        contay++;
    }
}

void ft_dibuja_linea(char a, char b, int n)
{
    int contax;
    contax = 0;

    if(n == 1)
    {
        //si x solo mide 1 solo dibuja el primer carácter.
        ft_putchar(a);
    }
    else{
        //si mide mas pues nos vamos a un bucle
        while (contax < n)
        {
            if(contax == 0 || contax == n-1)
            {
                //dibujamos el primer y el ultimo carácter aquí
                ft_putchar(a);
            }
            else
            {
                //aqui pintamos todo lo demas, como mastercard
                ft_putchar(b);
            }
            //aumentamos contax y seguimos repitiendo hasta salir del bucle
            contax++;
        }
    }
    ft_putchar('\n');
}
