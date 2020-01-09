#include<iostream>
using namespace std;
int main(){
    printf("Enter the size of the arra");
    int a;
    bool found=false;
    scanf("%d",&a);
    int arr[a];
    printf("Enter the Array here");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("input Search number");
    int value;
    scanf("%d",&value);
    for(int i=0;i<a;i++){
        if(value==arr[i]){
            //printf("value found");
            found = true;
            break;
        }
        
    }
    if(found){
        printf("value found");
        
    }else{
        printf("not found");
    }
}