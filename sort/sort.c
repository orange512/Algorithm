#include <stdio.h>
#include <stdlib.h>

# define N 8
void Merge(int a[],int lo, int p,int hi);

void Mergesort(int a[],int lo,int hi)
{
    int p=0;
    if(lo<hi)
    {
         p = (lo+hi)/2;
         Mergesort(a,lo,p);
         Mergesort(a,p+1,hi);
         Merge(a,lo,p,hi);
    }
}
void Merge(int a[],int lo, int p,int hi)
{
    int *c=NULL;
    c=(int *)malloc((hi-lo+1)*sizeof(int));
    int k,i=lo,j=p+1;
    for(k=0;k<hi-lo+1;k++)
    {
        if(i < lo || i > p)
        {
            c[k]=a[j++];
        }
        else if(j < p+1 || j>hi)
        {
            c[k]=a[i++];
        }
       else if(a[i]<a[j])
        {
           c[k] = a[i++];
        }
        else
           c[k]=a[j++];
    }
    for(k=0;k<hi-lo+1;k++)
    {
        a[lo+k]=c[k];
    }
    free(c);
}


int halfSearch(int a[], int n)
{
    int key;
    printf("\nplease input your key:");
    scanf("%d",&key);
    int  start = 0,end = n-1;
    int mid;
    while (start<=end)
   {
       mid =(start+end)/2;
       if(a[mid]==key) return 0;
       else if (a[mid]<key) start = mid + 1;
       else end = mid - 1;
   }
   return 1;

   }

int main()
{
    int i,k;
    int a[N]={1,5,6,2,9,4,8,7};
    printf("before sort\n");
    for(i=0;i<N;i++)
    {
        printf( "%d \t",a[i] );

    }
    printf("\n");
    Mergesort(a,0,N-1);
    printf("after sort\n");
    for(i=0;i<N;i++)
    {
        printf( "%d \t",a[i] );

    }
    k=halfSearch(a,N);
    if(k==0)
        printf("the array have your key\n");
    else
        printf("the array have not your key!\n");

    return 0;

}
