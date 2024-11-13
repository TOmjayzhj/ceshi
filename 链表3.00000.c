#include<stdio.h>
#include<stdlib.h>
struct num_node{
	int value;
	struct num_node *next;
};
struct num_node *creat();
struct num_node *insert(struct num_node*head ,struct num_node *num);
struct num_node *delete(struct num_node*head ,int num);
void print_num_node(struct num_node *head);
int main(void) 
{
	int num;
	int choice;
	struct num_node *head,*p;
	do{
		printf("1:Creat 2:Insert 3:Delete 4:Print 0:Exit \n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				head = creat();
				break;
			case 2:
				printf("Input number :");
				scanf("%d",&num);
				p = (struct num_node*)malloc(sizeof(struct num_node));
				p->value = num;
				head = insert(head,p);
				break;
			case 3:
				printf("Input number :");
				scanf("%d",&num);
				head = delete(head,num);
				break;
			case 4:
				print_num_node(head);
				break;
			case 0:
				break;
		}
	}while(choice!=0); 
	return 0;
}
struct num_node *creat()
{
	int number;
	struct num_node *head,*last,*p;
	head = last = NULL;
	scanf("%d",&number);
	while(number!=0){
		p = (struct num_node*)malloc(sizeof(struct num_node));
		p->value = number;
		p->next  = NULL;
		if (head == NULL){
			head = p;
		}else{
			last->next = p;
		}
		last = p;
		scanf("%d",&number);
	}
    return head;
}

struct num_node *insert(struct num_node*head ,struct num_node *num)
{
	struct num_node *ptr1,*ptr2,*ptr;
	ptr2 = head;
	ptr  = num ;
	if(head==NULL){
		head = ptr;
		ptr->next = NULL;
	}else{
		while((ptr->value>ptr2->value)&&(ptr2->next!=NULL)){
			ptr1 = ptr2;
			ptr2 = ptr2->next;
		}
		if(ptr->value<=ptr2->value){
			if(head==ptr2) head = ptr;
			else ptr1->next = ptr;
			ptr->next = ptr2;
		}else{
			ptr2->next=ptr;
			ptr->next = NULL;
		}
	}
	return head;
}

struct num_node *delete(struct num_node*head ,int num)
{
	struct num_node *ptr1,*ptr2;
	while(head!=NULL&&head->value==num){
	ptr2 = head;
		head = head->next;
		free(ptr2);
	}
	if(head==NULL)
	return NULL;
	ptr1 = head;
	ptr2 = ptr1->next;
	while(ptr2!=NULL){
		if(ptr2->value==num){
			ptr1->next=ptr2->next;
			free(ptr2);
		}else
		
			ptr1 = ptr2;
			ptr2 = ptr1->next;
	
	}
	return head;
}

void print_num_node(struct num_node *head)
{
	if(head==NULL){
		printf("Not Found!\n");
	}
	struct num_node *ptr;
	for(ptr=head;ptr!=NULL;ptr=ptr->next){
		printf("%d#",ptr->value); 
	}
	printf("\n");
}
