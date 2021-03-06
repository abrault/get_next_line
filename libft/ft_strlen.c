/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:14:21 by abrault           #+#    #+#             */
/*   Updated: 2013/12/06 14:18:39 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
    if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}
