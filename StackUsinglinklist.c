#include<stdio.h>

typedef struct Node node;

struct Node{
    int data;
    node *next;
};
node *top=NULL;//This is a Global variable

void push(int data)
{
    node *t;
    t=(node*)malloc(sizeof(node));
    if(t==NULL)
        printf("Stack is Full\n");
    else{
        t->data=data;
        t->next=top;
        top=t;
    }
}

int pop()
{
    node *t;
    int x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else
    {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

void display()
{
    node *p=top;
    while(p!=NULL)
    {
        printf("%d  ",p->data);
        p=p->next;
    }
    printf("\n");
}
int peek(int pos)
{
    int x=-1,i;
    node *p=top;
    for(i=0,p!=NULL;i<pos-1;i++)
    {
        p=p->next;
    }
    if(p!=NULL)
        return p->data;
    else
        return -1;
}


int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
display();
printf("%d",peek(3));
}
