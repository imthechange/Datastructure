#include<iostream>
int top=-1;
int arr[100];
void push(int value,int index);
void push(){
    int value;
    printf("Enter the value\n");
    scanf("%d",&value);
    if(top == -1){
        printf("stack is empty\n");
        arr[++top]=value;
    }else{
        arr[++top]=value;
    }
}
int pop(){

    int value=0;
    if(top==100){
        printf("stack is full\n");
    }else{
        value = arr[top--];
    }
    return value;
}
int main(){
    int option=0;
    printf("Input option\n");
    printf("Input  1 to push , 2 to pop and -1 to quit\n");
    scanf("%d",&option);
    while(option!=-1){
    
    switch(option){
        case 1:push();break;
        case 2:printf("%d",pop());break;
        default:printf("\nInvalid option");break;
    }
         printf("\nInput  1 to push , 2 to pop and -1 to quit");
    scanf("%d",&option);   
    }
}
