/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 09:15:50 by abrault           #+#    #+#             */
/*   Updated: 2013/12/06 14:22:18 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t size)
{
	int 	i;
	int		lenght;

	if (destination == NULL || source == NULL || size == 0)
		return (destination);
	lenght = ft_strlen(source);
	i = 0;
	while (i < size && (destination[i] =! 0 && source[i] != 0))
	{
		destination[i] = source[i];
		i++;
	}
	return (destination);
}
