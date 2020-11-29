#include<stdio.h>
typedef struct Node node;
struct Node{
    char data;
    node *next;
};
node *top=NULL;
void push(char data)
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
void display()
{
    node *t=top;
    while(t!=NULL)
    {
        printf("%c ",t->data);
        t=t->next;
    }
    printf("\n");
}
char pop()
{
    node *t;
    char x=-1;
    if(top==NULL)
        printf("Stack is Empty\n");
    else{
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}
int isBalanced(char *exp)
{
    int i;
    for(i=0;exp[i]!=0;i++)
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')'){
            if(top==NULL)
                return 0;
            pop();
        }

    }
    if(top==NULL)
        return 1;
    else
        return 0;

}

int main(){
char *exp="((a+b)*(c-d)))";
printf("%d",isBalanced(exp));
}
