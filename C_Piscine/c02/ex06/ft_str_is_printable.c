/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:38:20 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/19 15:18:07 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
		i++;
		}
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d", ft_str_is_printable("aaa"));
	printf("\n%d", ft_str_is_printable("ä´áááá"));
	printf("\n%d", ft_str_is_printable(""));
}
*/
