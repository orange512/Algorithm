/*************************************************************************
	> File Name: merge_sort.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月20日 星期二 17时11分32秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int merge(int a[],int sort[],int low,int j,int high)
{
    if(low > high || a == NULL)
    {
        printf("input error\n");
        return -1;
    }
    int first = low;
    int mid = j + 1;
    int last = high;
    int k = 0;
    while(first <= j && mid <= last)
    {
        if(a[first] < a[mid])
        {
            sort[k++] = a[first++]; 
        }
        else 
        {
            sort[k++] = a[mid++];
        }
    }
    if(mid > last)
    {
        while(first <= mid)
        {
            sort[k++] = a[first++];
        }
    }
    if(first > j)
    {
        while(mid < last)
        {
            sort[k++] = a[mid++];
        }
    }
    for(int i = 0; i < high - low + 1;i++)
    {
        a[low+i] = sort[i];
    }
    return 0;
}
int merge_sort(int a[],int c[],int low,int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;
        merge_sort(a,c,low,mid);
        merge_sort(a,c,mid+1,high);
        merge(a,c,low,mid,high);
    }
}
int main()
{
    int a[8] = {3,4,7,9,1,2,6,8};
    int c[8];
    merge_sort(a,c,0,7);

    for(int i = 0 ; i < 8 ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
