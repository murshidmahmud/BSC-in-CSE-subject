//Element Push in stack: 

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

int main(){
    push(1);
    push(3);
    push(5);
    push(9);
    while(top>=0){
        printf("%d\n",stack[top]);
        top= top-1;
    }
    
}

