#include<stdio.h>
#define MAX 80
void swap(int *a,int *b);
void miaopao(int str[],int n);
int main(void)
{
	int n,str[MAX];
	int i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	miaopap(str,n);
	
	for(i=0;i<n;i++){
		printf("%d",str[i]);
	}
	return 0;
}
void miaopao(int str[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(str[j]>str[j+1]){
			swap(&str[j],&str[j+1]);
			}
		}
	}
 }
 void swap(int *a,int *b)
 {
 	int t;
 	*b=t;
 	*b=*a;
 	*a=t;
  } 
