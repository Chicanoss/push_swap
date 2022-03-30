/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specials_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:07:38 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/30 21:40:03 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_less_than3(t_args *s)
{
	if (s->astack[0] == 0)
	{
		swap(s, "sa");
		reverse_rotate(s, "rra");
	}
	//if (s->astack[0] == 1 && s->astack[1] == 0)
		//swap(s, "sa");
}
