#include<stdio.h>
#define MAX 10
void swap(int *px,int *py );
void bubble(int a[],int n);
int main(void)
{
	int n,i;
	int a[MAX];
	
	printf("Enter n(n<=10):");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	bubble(a,n);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
		return 0;
	
}
void bubble(int a[],int n)
{
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
}
void swap(int *px,int *py)
{
	int t;
	t=*px;
	*px=*py;
	*py=t;
}
