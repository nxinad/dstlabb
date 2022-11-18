#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

void push (int st[], int *(top), int *ele){
        if(*top == size - 1){
            printf("stack overflow");
        }else{
            *top++;
            st[*top] = ele;
         }
}
int pop(int st[],int *(top){
        if(*top == -1){
            printf("underflow");
        }else{
            int n = st[(*top)];
            *top--;
            return n;
            
            }
        }
void display(int st[], int (*top)){
    if(*top == -1){
        printf("empty stack");
    }else{
        for(int i = 0;i <= (*top); i++){
            printf("%d\n",st[i]);
        
        }
    }
}
 int main(){
    int st[100], top=-1,j=1,ch,n;

    while(j > 0){
        printf("enter a choice\n");
        printf{"1> push  2>pop 3>display 4>exit"}
        scanf("%d",)
    }
 }