#include<stdio.h>
struct student{
	int num;
	char name[10];
	int computer,math,English;
	double average;
};
int update_score(struct student *p,int n,int num,int coure,int score);
int main(void)
{
	int course,i,n,num,pos,score;
	struct student stu[50];
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input the info of No.%d:",i+1);
		printf("number:");
		scanf("%d",&stu[i].num);
		printf("student name:");
		scanf("%s",stu[i].name);
		printf("computer score:");
		scanf("%d",&stu[i].computer);
		printf("math score:");
		scanf("%d",&stu[i].math);
		printf("English score:");
		scanf("%d",&stu[i].English);
		//printf("\n");
	}
	
	printf("Input the number of the student to be updated:");
	scanf("%d",&num);
	printf("Input the coure:1-computer,2-math,3-English:");
	scanf("%d",&course);
	printf("Input thr new score:");
	scanf("%d",&score);
	
	pos=update_score(stu,n,num,course,score);
//	printf("pos=%d\n",pos);
//	printf("name:%s\n",stu[])
	
	if(pos==-1){
		printf("Not found!\n");
	}else{
		printf("After update:\n");
		printf("num\t computer\t math\t English\n");
		printf("%d\t  %d\t       %d\t   %d\t",stu[pos].num,stu[pos].computer,stu[pos].math,
		                                                            stu[pos].English);
	}
	
	return 0;
}
int update_score(struct student *p,int n,int num,int course,int score)
{
	int i,pos;
	for(i=0;i<n;i++,p++){
		if(p->num==num)break;
	}
	if(i<n){
		switch(course){
			case 1:p->computer=score;break;
			case 2:p->math=score;break;
			case 3:p->English=score;break;
		}
		pos=i;
	}else{
		pos=-1;
	}
	return pos;
}
