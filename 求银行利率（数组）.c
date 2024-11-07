#include<stdio.h>
int main(void)
{
	int a[6] = {1000000,600000,400000,200000,100000,0};
	double b[6] = {0.01,0.015,0.03,0.05,0.075,0.1};
	int i;
	double num, r = 0;
	scanf( "%lf" , &num );
	for ( i = 0 ; i < 6 ; i++){
		if ( num >= a[i]){
			r += (num - a[i]) * b[i];
			num = a[i];
		}
	}
	printf("%.2f",r);
	return 0;
 } 
