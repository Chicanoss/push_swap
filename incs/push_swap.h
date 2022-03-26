/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:23:48 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/26 11:59:04 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>
# include <string.h>

typedef struct s_arguments
{
	int	*astack;
	int	*bstack;
	int	*copy;
	int	asize;
	int	bsize;
}				t_args;

void ft_radixsort(int *arr, int n);
int DecToBase(int base, int n);
void ft_index(t_args *stack, int	n);
void ft_algo (t_args *stack, int n);
int	*ft_parsing(char	**arr, t_args	*stack, int	n);
void ft_pb (t_args *stack, int n);
void *ft_calloc(size_t count, size_t size);

# endif
