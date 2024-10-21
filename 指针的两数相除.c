#include<stdio.h>
double divide (int a,int b,int *c);
int main(void)
{
	int a,b;
	int c;
	scanf("%d %d",&a,&b);
	if(divide(a,b,&c)) {
	printf("%d",c);
}
	return 0;
}
double divide (int a,int b,int *c)
{
	int ret=1;
	if(b==0){
		ret=0;
	}
	else{
	*c=a/b;
	}
	return ret;
}
