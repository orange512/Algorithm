/*************************************************************************
	> File Name: quick_sort.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月20日 星期二 16时38分40秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int quick_sort(int a[],int low,int high)
{
    if(low >= high)
    {
        return 1;
    }
    else
    {
        int i = low;
        int j = high;
        int key = a[low];
        while(i < j)
        {
            while(i  < j &&  a[j] >= key )
            {
                j--;
            }
            a[i] = a[j];
            while(i < j && a[i] <= key )
            {
                i++;
            }
            a[j] = a[i];
        }
        a[i] = key;
        quick_sort(a,low,i-1);
        quick_sort(a,i+1,high);
    }

}

int main()
{
    int a[4] = {2,8,4,3};

    quick_sort(a,0,3);

    for(int i = 0;i < 4;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;

}
