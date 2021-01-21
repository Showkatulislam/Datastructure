#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
   *b=temp;

}
void selection(int A[],int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++){

        for(j=k=i;j<n;j++)
            {
                if(A[j]<A[k])
                    k=j;
            }
            swap(&A[i],&A[k]);
    }
}
void display(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[6]={8,6,3,2,5,4};
    selection(a,6);
    display(a,6);
}
