#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10

int top=-1;
int stack[size];
void display(){
  int i;
  if(top==-1){
    printf("Stack is Empty");
  }
  else{
    for(int i=top; i>=0;i--){
      printf("%d\n",stack[i] );
    }
  }
}
void push(int data){
  if (top==size-1){
    printf("\n\tStack is full....you cant push data....!!!!");
  }
  else{
    top++;
    stack[top]=data;
    printf("\n\tData pushed into stack successfully....");
  }
}

void pop(){
  if (top==-1){
    printf("Stack is Already Empty you can't perform pop  again....!\n" );
  }
  else{
    printf("Element detected:\n" );
    top--;
  }
}
void main(){
  int choice;
  int data;
  int flag=1;
  while(flag==1){
    printf("Press any Key to continue" );
    getch();
    system("cls");

    printf("\n************Menu**********" );
    printf("\n\n1.Display\t2.Push\t3.pop\t 0 for exit");
    printf("\nEnter your choice: " );
    scanf("%d",&choice);
    switch(choice){
      case 0:flag=0;
            break;
      case 1:display();
            break;
      case 2:printf("\n\tEnter element to push into stack: ");
             scanf("%d",&data);
             push(data);
             break;
      case 3:pop();
            break;
      default:
            printf("Wrong Choice\n");
            break;
    }
  }
}
