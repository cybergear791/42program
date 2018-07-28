/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nflouty <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 12:20:28 by nflouty           #+#    #+#             */
/*   Updated: 2018/07/25 21:22:01 by nflouty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
using namespace std;
#include <iostream>
void ft_print_comb(int n){
	int f = 0;
	int i;
   	i = 0;
	while(i <= 7)
	{
		int j;
	   	j = i + 1;
		if(n==1){
		cout<<i<<' ';
		int f =1;	
		}
		while(j <= 8 && f==0)
		{
			int k;
			k = j + 1;
			if(n == 2){
				cout<< i<< j << ' ';
				f = 1;
			}
				while(k <= 9 && f == 0)
				{
					if(n == 3){
					cout<< i << j << k << ' ';
					f = 1;
					}
					int l;
					l = k + 1;
					while( l <=6 && f == 0){
						if(n == 4){
							cout<<i<<j<<k<<l<<' ';
							f =1;
						}
						int y = l + 1;
						while ( y <=  5 && f ==0){
							if(n == 5){
								cout<<i<<j<<k<<l<<y<<' ';
								f = 1;}
							int e = y +1;
							while (e <= 4 && f ==0){
								if(n == 6){
									cout<<i<<j<<k<<l<<y<<e<<' ';
									f =1;
								}
								int r = e +1;
								while(r <= 3 && f ==0){
									if(n== 7){
									cout<<i<<j<<k<<l<<y<<e<<r<<' ';
									f =1;
									}
									int t = r+1;
									while(t <=2 && f==0){
										if(n==8){
											cout<<i<<j<<k<<l<<y<<e<<r<<t<<' ';
											f=1;
										}
										int g = t+1;
										while(g<=1 &&f==0){
											if(n==9){
												cout<<i<<j<<k<<l<<y<<e<<r<<t<<' ';
												f = 1;
											}
										g++;}
									t++;}
								r++;}
							e++;}
						y++;}
						l++;
					}
					k++;
			}
			j++;
		}
	i++;
}
}
int main()
{
int n;
cout<<"Enter a number between 0 and 10: ";
cin >> n;
while(n > 9 || n < 1){
	cout<<"Please enter a number between 0 and 10 again: ";
	cin >> n;
}
ft_print_comb(n);
}
