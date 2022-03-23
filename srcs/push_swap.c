/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/23 16:48:44 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int   argc, char **argv)
{
	int *bstack;
    //int n = sizeof(argc) / sizeof(argv[0]);
    int i;
	int	*astack;

    i = 0;
    /*while (i < argc)
    {
        printf("%s\n" , argv[i]);
        i++;
    }
	*/
	bstack = (int	*)malloc(sizeof(int) * argc);
	i = 1;
    astack = ft_parsing(argv, argc);
    ft_index(astack, argc);
	ft_pb (astack, bstack, argc);
	//printf("%d", astack[0]);
    /*while( i < argc)
    {
        printf("%d\n" , astack[i]);
        i++;
    }*/
    //ft_radixsort(arr, n);
   /* while( i < n)
    {
        arr[i] = DecToBase(2, arr[i]);
        i++;
    }*/
    //i = 0;
    //ft_algo(astack, bstack, argc);
    /*while (i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/

    return 0;
}