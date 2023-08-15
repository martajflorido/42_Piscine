/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:40:52 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/26 17:54:18 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	digit;

	digit = 0;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb == -2147483647)
		write (1, "2147483647", 11);
	if (nb < 10 && nb >= 0)
		ft_putchar (nb + '0')
		if (nb >= 10)
	{
		digit = nb % 10;
		nb = nb / 10;
	ft_putnbr(nb);
	ft_putchar(digit + '0';)
	}
}

int main (void)
{
	ft_putnbr(4);
}
