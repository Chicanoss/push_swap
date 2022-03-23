/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:33 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/23 14:20:52 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


int ft_getMax(int arr[], int n)
{
    int mx = arr[0];
	int i;

	i = 1;
	while (i < n)
	{
		if (arr[i] > mx)
			mx = arr[i];
		i++;
	}
    return mx;
}


void ft_algo (int    *astack,int *bstack, int n)
{
    int m;
	int	exp;
	int i;
	
	bstack = 0;
	exp = 1;
	m = ft_getMax(astack, n);
	printf(" valeur du max %d\n" , m);
	i = 0;

	while (m / exp > 0)
	{
		exp *= 10;
	}
    printf("valeur de exp : %d\n" , exp);









    /*int size = n;
    int max_num = n - 1; // the biggest number in a is stack_size - 1
    int max_bits = 0; // how many bits for max_num 
    while ((max_num >> max_bits) != 0) ++max_bits;
    {
        for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
        {
            for(int j = 0 ; j < size ; ++j)
            {
                int num = arr[1]; // top number of A
                if (((num >> i)&1) == 1)
                    printf("ra\n");
        // if the (i + 1)-th bit is 1, leave in stack a
                else
                    printf("PB\n");
        // otherwise push to stack b
            }
        }
    }*/
}