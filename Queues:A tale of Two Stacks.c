#include<stdio.h>
#include<malloc.h>
#define MAX 100000

typedef struct stack{
    int tos;
    long long int arrays[MAX];
}stack;

typedef struct queue{
    int first;
    int last;
    long long int  arrl[MAX];
}queue;

void displayStack(stack *t,int start){
    for(int i=t->tos-1;i>=start;i--){
        printf("%lld ",t->arrays[i]);
    }    
    printf("\n");
}

void insertStack(stack *t,long long int ele,int start){
    t->arrays[t->tos++]=ele;
    //displayStack(t,start);
}

int main(){
    stack x;
    x.tos=0;
    
    
    int t;
    scanf("%d",&t);
    int front=0;
        
    while(t!=0){
        long long int ele;
        int choice ;
        scanf("%d",&choice);
        
        switch(choice){
            case 1: scanf("%lld",&ele);
                    insertStack(&x,ele, front);
                    break;
            case 2:front++; break;
            case 3: printf("%lld\n",x.arrays[front]);break;
       }
         
        t--;
    }
    
    return 0;
}
