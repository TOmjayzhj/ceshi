#include<stdio.h>
int main(void)
{
	
	int k=16;
	int *p=&k;
	printf("Hello world\n");
	printf("k=%d\n",k);
	printf("*p=%d\n",*p);
	printf("p=%d\n",p);
	printf("*p=%p\n",*p);
	return 0;
}
