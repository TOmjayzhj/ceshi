#include<stdio.h>
int main(void)
{
	int i,n,a[10],*p;
	long int sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++){
    	sum+=a[i];
	}
	printf("calculated by array: sum= %d\n",sum);
	
	
	sum=0;
	for(p=a;p<a+i;p++){
		sum+=*p;
	}
	printf("calculated by pointer: sum= %d\n",sum);
	return 0;
	
}
