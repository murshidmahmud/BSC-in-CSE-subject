#include<stdio.h>
#define max 10

int stack[max];
int top = -1;

void push(int a){
        if(top>=max-1){
            printf("stack overflow");
        }
        top = top+1;
        stack[top]=a;
    }

int pop(){
    if(top<0){
        printf("stack underflow");
    }
    int val = stack[top];
    top = top-1;
    return val;
}

int main(){

    push(1);
    push(2);
    pop();
    while(top>=0){
        printf("%d\n",stack[top]);
        top--;
    }
}