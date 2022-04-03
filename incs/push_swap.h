/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:23:48 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/03 13:32:17 by rgeral           ###   ########.fr       */
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
# include <stdbool.h>

typedef struct s_arguments
{
	int	*astack;
	int	*bstack;
	int	size;
	int	asize;
	int	bsize;
}				t_args;

void	ft_radixsort(int *arr, int n);
int		DecToBase(int base, int n);
void	ft_index(t_args *stack, int n);
void	algo(t_args *stack);
int		*ft_parsing(char **arr, t_args *stack, int n);
void	*ft_calloc(size_t count, size_t size);
void	ft_push(t_args *stack, char	*cmd);
int		ft_strcmp(const char	*first, const char	*second);
void	swap(t_args *stack, char *cmd);
void	rotate(t_args *stack, char	*cmd);
void	reverse_rotate(t_args *stack,char *cmd);
void	ft_sort_less_than3(t_args *s);
void	sort_five(t_args *s);
int		*ft_sort(int	*copy, int n);
void	ft_error(void);

#endif
