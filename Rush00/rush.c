/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 22:27:15 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/29 12:15:32 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void rush(int col, int row)
{
	if(col == 1 && row == 1)
		printf("/\n");
	if(col == 0 && row == 0)
		return;
	else
	{
			printf("/");
			int i = 0;
			while(i <col-2)
			{
				printf("*");
				i++;
			}
			printf("\\");
		    printf("\n");
			
			int j = 0;
			while( j < row-2)
			{
				printf("*");
				for(int w = 0; w < col-2; w++)
					printf(" ");
				printf("*\n");
				j++;
			}

			printf("\\");
			int h = 0;
			while(h <col-2)
			{
				printf("*");
				 h++;
			}
			printf("/\n");
			
	}
	
}

int main(void)
{

	int col = 10;
	int row = 10;
	rush(col,row);
	
	col = 10;
	row = 50;
	rush(col,row);

}


