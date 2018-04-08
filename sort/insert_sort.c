/*************************************************************************
	> File Name: insert_sort.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月20日 星期二 17时06分55秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int insert_sort(int a[],int low,int high)
{
    if(low > high)
    {
        printf("intput error\n");
        return -1;
    }
    int i = low;
    int j = 0;

    for(i = 1;i < high;i++)
    {
        if(a[i] < a[i-1])
        {
            int temp = a[i];
            for(j = i-1;j >= 0 && a[j] > temp;j--)
            {
                a[j+1] = a[j];
            }
            a[j+1] = temp;
        }
    }
}
int main()
{
    int a[6] = {3,7,2,8,1,9};
    insert_sort(a,0,5);
    for(int i = 0; i < 6;i++)
    {
        printf("%d ",a[i]);
    }
}
