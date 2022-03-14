/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:23:48 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/14 18:08:49 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <limits.h>

/*typedef struct s_arguments
{
	int	*arr;
	int	*arrb;
}				t_args;*/

void ft_radixsort(int *arr, int n);
int DecToBase(int base, int n);
void ft_index(int	*arr, int	n);
void ft_algo (int    *arr,int *arrb, int n);
int ft_parsing(int	*arr, int	n);

# endif
