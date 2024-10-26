#include<stdio.h>

typedef struct{
	int x;
	int y;
}point;

struct rectangle{
     point p1;
     point p2;
};

void printfRect(struct rectangle r)
{
	printf("<%d,%d> to <%d,%d>\n",r.p1.x,r.p1.y,r.p2.x,r.p2.y);
}

int main(void)
{
	int i;
	struct rectangle rects[]={
		{{1,2},{3,4}},
		{{5,6},{7,8}}
	};
	for(i=0;i<2;i++){
	printfRect(rects[i]);
}
}
