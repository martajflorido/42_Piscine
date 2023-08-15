/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:44:51 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/20 11:36:13 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

char	*ft_strcpy(char *dest, char *src)

{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	*src;
	char	dest[15];

	src = "Hello";
	printf("%s", ft_strcpy(dest, src));
	return (0);
}
*/
