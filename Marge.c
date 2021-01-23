#include<stdio.h>
void marge(int a[],int b[],int n,int m)
{
   int i,j,k;
   int c[10];
   i=j=k=0;
  while(i<n && j<m)
  {
  if(a[i]<b[j])
    c[k++]=a[i++];
   else
    c[k++]=b[j++];
  }
  for(;i<n;i++)
    c[k++]=a[i];
  for(;j<m;j++)
    c[k++]=b[j];
 for(i=0;i<10;i++)
    printf("%d ",c[i]);

}

int main()
{
    int a[5]={1,3,4,8,9};
    int b[5]={2,4,5,6,10};
    marge(a,b,5,5);

}
