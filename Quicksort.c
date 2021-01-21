#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
   *b=temp;

}
int partition(int A[],int l,int h)
{
    int i=l,j=h,pivot;
    pivot=A[l];

  while(i<j)
  {
          do{
        i++;
    }while(A[i]<=pivot);
    do{
        j--;
    }while(A[j]>pivot);
    if(i<j)
        swap(&A[i],&A[j]);
  }
  swap(&A[l],&A[j]);
  return j;
}
void Quick(int A[],int l,int h)
{
    int j;
    if(l<h){
       j=partition(A,l,h);
       Quick(A,l,j);
       Quick(A,j+1,h);
    }
}
void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int a[7]={50,30,20,90,60,80,100};
    Quick(a,0,7);
    display(a,7);
}

