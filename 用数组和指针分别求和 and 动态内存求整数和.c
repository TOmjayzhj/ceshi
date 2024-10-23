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


动态内存求整数和                main [scanf("%d",p+i);]
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,sum,n,*p;
	scanf("%d",&n);
	
	if((p=(int*)calloc(n,sizeof(int)))==NULL){
		printf("Not able to allocate menony.\n");
		exit(1);
	}
	
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	sum=0;
	for(i=0;i<n;i++){
		sum+=*(p+i);
	}
	printf("The sum is %d\n",sum);
	free(p);
	return 0;
}
