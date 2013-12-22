/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/06 08:59:24 by abrault           #+#    #+#             */
/*   Updated: 2013/12/22 13:51:35 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		GET_NEXT_LINE_H
# define	GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <string.h>
# include "libft/libft.h"

# define BUFF_SIZE 1000

int		get_next_line(int const fd, char **line);
char	*extract_line(char **str);
char	*re_malloc(char *buff, char *str);
int		traitement(char **stock, char **line);

#endif
