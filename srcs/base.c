/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 13:05:58 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/11 11:19:29 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int DecToBase(int base, int n);

/*int main(){
	
	int i=2>>4;
    int base= 2;
    int num = DecToBase( base, i);
	
	
	//printf("The decimal number %d in base %d is %d  \n", i,base, 100100 >> 2);
		
	return 0;
}
*/
/*
     n = number in base 10 = 4
     base = the base that we want to convert to = 2
     4 /2  =  2  Remainder= 0
     2 / 2 = 1   Remainder= 0
     1 / 2 = 0   Remainder= 1
     
     4 in binary is 1 * 100 + 0 *10 + 0 *1 = 100
     
     4 in binary is 100
*/

int DecToBase(int base, int n)
{
	int num =0;// the number that we want to return in the new base
	int i = 0; // the iterative variable used for the place 
	int quotient= n; // the quotient of the number in base 10 
	int remainder = 0; // the remainder of the number in base 10 
	
	while(quotient != 0)
    {
		remainder = quotient%base;
		quotient = quotient / base;
		
		num = pow(10,i)*remainder + num;
		i++;
	}
	printf("%d" , 6&1);
	return num;
}