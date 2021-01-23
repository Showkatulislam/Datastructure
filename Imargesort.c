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
void Imargesort(int A[],int n)
{
    int p,i,l,h,mid;
    for(p=2;p<=n;p*=2)
    {
        for(i=0;i+p-1<=n;i+=p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            marge(A,l,mid,h);
        }
    }
    if(p/2<n)
      marge(A,0,n/2-1,h);

}

int main()
{
  int a[8]={8,3,10,4,9,2,6,5},i;
  Imargesort(a,8);
  for(i=0;i<8;i++)
  printf("%d ",a[i]);

}
