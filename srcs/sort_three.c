/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:07:38 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/02 16:17:27 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_less_than3(t_args *s)
{
	if (s->astack[0] < s->astack[1] && s->astack[1] > s->astack[2]
		&& s->astack[0] < s->astack[2])
	{
		swap(s, "sa");
		rotate(s, "ra");
	}
	else if (s->astack[0] > s->astack[1] && s->astack[1] < s->astack[2]
		&& s->astack[0] < s->astack[2])
		swap(s, "sa");
	else if (s->astack[0] > s->astack[1] && s->astack[1] < s->astack[2]
		&& s->astack[0] > s->astack[2])
		rotate(s, "ra");
	else if (s->astack[0] < s->astack[1] && s->astack[1] > s->astack[2]
		&& s->astack[0] > s->astack[2])
		reverse_rotate(s, "rra");
	else if (s->astack[0] > s->astack[1] && s->astack[1] > s->astack[2]
		&& s->astack[0] > s->astack[2])
	{
		swap(s, "sa");
		reverse_rotate(s, "rra");
	}
}
