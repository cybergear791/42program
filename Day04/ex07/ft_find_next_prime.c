/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:20:46 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/27 14:46:36 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_find_next_prime(int nb)
{	if(nb == 0)
		return 2;
	int orig = nb;
	int  pen = 0;
	int nb2 = nb - 1;
	int first;
	int atleast = 0;
	nb++;
	while(pen == 0)
	{
		atleast = 0;
		for(int num = 2; num < nb; num++)
			for(int j = 2; j < nb;j++)
				if(j * num == nb)
					atleast = 1;
		if(atleast>0)
			nb++;
		else
		{
			first = nb;
			pen = 1;
		}
	}
//**********************************
	int atleast2 = 0;
	int second;
	int pen2 = 0;
	while(pen2 == 0)
	{
		atleast2 = 0;
		for(int num = nb2; num > 2; num--)
			for(int j = nb2; j > 2; j--)
				if(j * num == nb2)
					atleast2 = 1;
		if(atleast2 > 0)
			nb2--;
		else
		{
			second = nb2;
			pen2 = 1;
		}
	}
//***********************************	
printf("first is %d\n",first);
printf("second is %d\n",second);
int big = first - orig;
int small = orig - second;
printf("big is %d\n",big);
printf("small is %d\n",small);
if(small <= big)
	return (first);
else
	return (second);

}//end function

int main() 
{
	int num;
	printf("Enter a prime number and bet you I'll find the next closest: ");
	scanf("%d",&num);
	int closest = ft_find_next_prime(num);
	printf("%d",closest);
}
