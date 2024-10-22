#include<stdio.h>
int main(void)
{
	int a=3;
	int *p=&a;
	printf("a=%d,*p=%d\n",a,*p);
	a=10; 
	printf("a=%d,*p=%d\n",a,*p);
	printf("Enter a:");
	scanf("%d",&a);
	printf("a=%d,*p=%d\n",a,*p);
	a++;
	printf("a=%d,*p=%d\n",a,*p);
	return 0;
}
