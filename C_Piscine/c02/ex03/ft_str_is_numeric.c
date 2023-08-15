/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:36:16 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/20 16:09:23 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i]) >= '0' && (str[i]) <= '9')
		{
		i++;
		}
		else
			return (0);
	}
	return (1);
}

/*
int main(void)
{
    printf("%d", ft_str_is_numeric("giyegHEUFur"));
    printf("\n%d", ft_str_is_numeric("2474849"));
    printf("\n%d", ft_str_is_numeric(""));
}
*/
