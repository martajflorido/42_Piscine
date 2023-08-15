/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:57:42 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/25 19:07:17 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)

{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
	j = 0;
		while (str[i + j] != '\0' && str [i + j] == to_find [j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
		j++;
		}
	i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hola mundo";
	char to_find[] = "m";

	printf("%s\n", ft_strstr(str, to_find));
}
*/
