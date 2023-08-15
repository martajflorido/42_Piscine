/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:24:33 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/19 15:21:12 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)

{
	unsigned int	x;

	x = 0;
	if (size != 0)
	{
		while (x < size - 1 && src[x] != '\0')
		{
			dest[x] = src[x];
			x++;
		}
	}
	dest [x] = '\0';
	return (ft_strlen (src));
}


/*
int	main(void)
{
	char	src[] = "hola";
	char	dest[] = "que tal";

	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("%s\n", dest);
	return (0);
}

*/