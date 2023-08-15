/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martjim2 <martjim2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 18:40:35 by martjim2          #+#    #+#             */
/*   Updated: 2023/07/25 18:44:57 by martjim2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		else
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "12345";
	char s2[] = "12347";
	int n1;
	int n2;

	n1 = ft_strcmp(s1, s2);
	printf("%d\n", n1);
	n2 = strcmp(s1, s2);
	printf("%d\n", n2);
	return (0);
}
*/
