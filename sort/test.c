/*************************************************************************
	> File Name: test.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月23日 星期五 11时11分01秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

void insert_sort(int a[],int low,int high)
{
    if(low > high)
       return;

    int j;
    for(int i = i;i < high+1;i++)
    {
        if(a[i] < a[i-1])
        {
            int temp = a[i];
            for(j = i -1; j >=0 && a[j] >temp;j--)
            {
                a[j+1] = a[j];
            }
            a[j+1] = temp;
        }
    }
}
int main()
{
    int a[4] = {5,7,2,1};
    insert_sort(a,0,3);
    for(int i = 0 ; i < 4;i++)
    {
        printf("%d ",a[i]);
    }
}
