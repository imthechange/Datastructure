#include<iostream>
struct node{
    int value;
    struct node *next;
};

struct node *start=NULL;

struct node *createNode(struct node*){
    int data;
    printf("Enter the value ");
    scanf("%d",&data);
    struct node *pre,*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->value=data;
    ptr->next=NULL;
    if(start==NULL){
        start=ptr;
    }else{
        pre=start;
        while(pre->next!=NULL)pre=pre->next;
        pre->next=ptr;
    }
    return start;
}

struct node *display(struct node*){
    struct node *pre=start;
    if(start==NULL){
        printf("NO data");
    }
    else{
        while(pre!=NULL){
            printf("%d",pre->value);
            pre=pre->next;
        }
    }return start;
    
}
struct node *deleterNode(struct node*){
    struct node *pre=start,*previous;
    
    int dataToBeDeleted;
    printf("Enter the value that you wanna delete");
    scanf("%d",&dataToBeDeleted);
    if(pre==NULL){
        printf("NO data found");
    }else { while(pre!=NULL){
        if(pre->value==dataToBeDeleted){break;}
        previous=pre;
        pre=pre->next;
    }
        
    }previous->next=pre->next;
    return start;
    
}

   struct node *insert_beg(struct node*){
       struct node *pre=start,*ptr;
       int insertData;
       if(start==NULL){prinf("its empty");}
       else{
           printf("Enter the data to inserted at begining ");
           scanf("%d")
       }
   }
int main(){
    
  
    int new_data=0;
   // scanf("%d",&new_data);
    while(new_data!=-1){
    printf("Enter 1 to insert data");
    printf("Enter 2 to display data");
    printf("Enter 3 to delete data");
    printf("Enter -1 to quit");
         scanf("%d",&new_data);
        switch(new_data){
            case 1: createNode(start);break;
            case 2:display(start);break;
            case 3:deleterNode(start);break;
            default:printf("Invalid options");break;
                                                
        }
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}


