/*************************************************************************
	> File Name: mytest_qsort.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月20日 星期二 17时01分48秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int Qsort(int a[],int low,int high)
{
    if(low >= high)
        return 1;
    
    int i = low;
    int j = high;
    int key = a[low];
    while(i < j)
    {
        while(i < j && a[j] >= key)
        {
            j--;
        }
        a[i] = a[j];
        while(i < j && a[i] <= key)
        {
            i++;
        }
        a[j] = a[i];
    }
    a[i] = key;
    Qsort(a,low,i-1);
    Qsort(a,i+1,high);

    return 1;
}
int main()
{
    int a[6] = {5,6,2,1,8,9};
    Qsort(a,0,5);

    for(int i = 0;i < 6;i++)
    {
        printf("%d\n",a[i]);
    }
    return 1;
}
