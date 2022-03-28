/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 20:48:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/28 11:35:08 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_bzero(void	*str, size_t	n)
{
	size_t	i;
	char	*j;

	i = 0;
	j = (char *) str;
	while (i < n)
	{	
		j[i] = 0;
		i++;
	}		
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(size * count);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

int	ft_strcmp(const char	*first, const char	*second)
{
	size_t	i;

	i = 0;
	while (first[i] && (unsigned char)first[i] == \
	(unsigned char)second[i])
		i++;
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}