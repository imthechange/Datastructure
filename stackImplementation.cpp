#include<stdio.h>
#include<malloc.h>
struct node{
	int value;
	struct node *next;
};
struct node *start=NULL;

struct node *create(struct node*){
	int data;
	struct node *ptr,*pre;
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("Enter the value");
	scanf("%d",&data);
	ptr->value = data;
	if(start == NULL){
		ptr->next=NULL;
		start=ptr;
	}else{
		ptr->next=start;
		start=ptr;
	}
	return start;
}
struct node *pop(struct node*){
	if(start==NULL){
		printf("Stack is Empty\n");
	}else{
	
	printf("pop value %d",start->value);
	start=start->next;}
}
int main(){
	printf("Enter the option");
	int option=0;
	printf("Enter 1 to push the data\n");
	printf("Enter 2 to pop the data\n");
	printf("Enter 0 to quit ");
	scanf("%d",&option);
	while(option!=0){
		switch(option){
			case 1:create(start);break;
			case 2:pop(start);break;
			default : printf("Invalid option\n");break;
		}
		printf("Enter the option\n");
		scanf("%d",&option);
	}
}
