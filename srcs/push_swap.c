/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/16 18:37:41 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int   argc, char **argv)
{
	//int *arrb;
    //int n = sizeof(argc) / sizeof(argv[0]);
    int i;

    i = 0;
    while (i < argc)
    {
        printf("%s\n" , argv[i]);
        i++;
    }
	//arrb = (int	*)malloc(sizeof(int) * n);
	i = 0;
    while (i < argc)
    {
        ft_parsing(argv[i], argc);
        i++;
    }
    //ft_index(arr, n);
   /* while( i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/
    //ft_radixsort(arr, n);
   /* while( i < n)
    {
        arr[i] = DecToBase(2, arr[i]);
        i++;
    }*/
    //i = 0;
    //ft_algo(arr, arrb, n);
    /*while (i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/

    return 0;
}