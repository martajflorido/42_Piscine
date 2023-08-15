/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-gon <jose-gon@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 21:26:43 by jose-gon          #+#    #+#             */
/*   Updated: 2023/07/23 21:26:48 by jose-gon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	number_name(char *dicc, char *to_find);
int		checking_arguments(int argc);
int		checking_array(char *buf, char argv[1]);

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[351];
	ssize_t	nr_bytes;

	checking_arguments(argc);
	fd = open ("numbers.dict", O_RDONLY);
	if (fd == -1)
	{
		write (1, "Error\n", 6);
	}
	else
	{
		nr_bytes = read(fd, buf, 351);
		close(fd);
		if (nr_bytes == 0)
		{
			write (1, "Empty file\n", 14);
		}
	}
	if (checking_array (buf, argv[1]))
		number_name (buf, argv[1]);
	return (0);
}
