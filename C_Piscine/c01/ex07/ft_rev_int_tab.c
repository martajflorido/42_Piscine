/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:19:17 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/12 18:38:33 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	t;

	i = 0;
	aux = 0;
	t = size - 1;
	while (i < (size / 2))
	{
		aux = tab[t];
		tab[t] = tab[i];
		tab[i] = aux;
		i++;
		t--;
	}
}


/*
int main (void)
{
	int i;
	i = 0;
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	while (i != size)
	{
		printf("%d", tab[i]);
		++i;
	}
	return (0);
}
*/