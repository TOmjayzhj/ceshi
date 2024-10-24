#include<stdio.h>
int main(void)
{
	int i,n;
	struct student{
		int num;
		char name[10];
		int math,English,computer;
		double average;
	};
	struct student stu,max;
	//printf("Enter n:");
	scanf("%d",&n);
	//printf("Enter student num,name,course-score:\n");             闲着没事干可以多敲几行
	//printf("No 1:");
   // scanf("%d %s %i %i %i",&max.num,max.name,&max.math,&max.English,&max.computer);
	//max.average=(max.math+max.English+max.computer)/3.0;
	
	for(i=1;i<=n;i++){
		//printf("No %d:",i);
		scanf("%d %s %i %i %i",&stu.num,stu.name,&stu.math,&stu.English,&stu.computer);
		stu.average=(stu.math+stu.English+stu.computer)/3.0;
		if(i==1){
			max=stu;
		}else if(stu.average>max.average){
			max=stu;
		}
	}
	
	printf("num:%d,name:%s,average:%.2f",max.num,max.name,max.average);
	return 0;
}
