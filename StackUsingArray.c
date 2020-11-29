
#include<stdio.h>
typedef struct Stack stack;
struct Stack{
    int size;
    int top;
    int *A;
};
void create(stack *st)
{
    printf("Enter the size of stack");
    scanf("%d",&st->size);
    st->top=-1;
    st->A=(int*)malloc(st->size*sizeof(int));
}
void Display(stack st)
{

    int i;
    for(i=st.top;i>=0;i--)
        printf("%d ",st.A[i]);
    printf("\n");
}

void push(stack *st,int data)
{
    if(st->top==st->size-1)
        printf("Stack is Full\n");
    else{
        st->top++;
        st->A[st->top]=data;
    }
}

int pop(stack *st)
{
    int x=-1;
    if(st->top==-1)
        printf("Stack is Empty\n");
    else{
       x=st->A[st->top];
       st->top--;
    }
    return x;
}

int peek(stack st,int pos)
{
    int x=-1;
    if(st.top-pos+1<0)
        printf("Invalid Index\n");
    x=st.A[st.top-pos+1];
    return x;

}
int isEmpty(stack st)
{
    return st.top==st.size-1;
}

int stackTop(stack st)
{
   if(!isEmpty(st))
    return st.A[st.top];
   return -1;
}
int main(){
    stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    push(&st,60);
    printf("%d\n",pop(&st));
    Display(st);
}
