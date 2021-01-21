#include<stdio.h>

void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void insertion(int A[],int n)
{
    int i,j,x;
    for(i=0;i<n;i++)
    {
        x=A[i];
        j=i-1;
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}
int main()
{
    int a[6]={8,6,3,2,5,4};
    insertion(a,6);
    display(a,6);
}
