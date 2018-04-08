/*************************************************************************
	> File Name: 3.c
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年03月27日 星期二 10时13分04秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int delete_array2(int a[],int n)
{
    int count = n;
    for(int i = 0,j = 1 ; j < count;)
    {
            if(a[i] == a[j])
            {
                count--;
                int k = j;
                int m = i;
                while(k <= count)
                {
                    a[m++] = a[k++];
                }
            }
            else
            {
                j++;
                i++;

            }
    }
    return count;
}


int main()
{
    int a[5] = {1,1,2,1,1};
    int k = delete_array2(a,5);
    for(int i = 0 ; i < k;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}

