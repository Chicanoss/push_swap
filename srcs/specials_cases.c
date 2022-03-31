/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specials_cases.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 20:07:38 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/31 00:06:35 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_sort_less_than3(t_args *s)
{
	if (s->astack[0] == 0)
	{
		swap(s, "sa");
		rotate(s, "ra");
	}
	//if (s->astack[0] == 1 && s->astack[1] == 0)
		//swap(s, "sa");
}
