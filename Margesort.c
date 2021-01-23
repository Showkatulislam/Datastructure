#include<stdio.h>
void marge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
   while(i<=mid && j<=h)
   {
    if(A[i]<A[j])
        B[k++]=A[i++];
    else
        B[k++]=A[j++];
   }
   for(;i<=mid;i++)
    B[k++]=A[i];
   for(;j<=h;j++)
    B[k++]=A[j];
   for(i=l;i<=h;i++)
    A[i]=B[i];
}
void Margesort(int a[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        Margesort(a,l,mid);
        Margesort(a,mid+1,h);
        marge(a,l,mid,h);
    }
}
int main()
{
    int a[8]={8,3,7,4,9,2,6,5};
    Margesort(a,0,7);
    for(int i=0;i<8;i++)
        printf("%d ",a[i]);
}
