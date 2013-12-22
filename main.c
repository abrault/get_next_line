/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 16:32:05 by abrault           #+#    #+#             */
/*   Updated: 2013/12/06 16:48:56 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(void)
{
	int		etat;
	int		i;
	int		fd;
	char	*line;
	char	file[] = "fichier.txt";

	i = 0;
	etat = 2;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		printf("Can't open \"%s\"\n", file);
		return (0);
	}
	while (etat != 0)
	{
		etat = get_next_line(fd, &line);
		printf("[Etat %d] Line %d : %s\n", etat, i, line);
		i++;
	}
	return (0);
}
