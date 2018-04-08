/*************************************************************************
	> File Name: b_search.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月22日 星期四 20时24分14秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

int b_search(int a[],int low,int high,int key)
{
    if(low > high)
       return -1;
    int mid;
    while(low < high)
    {
        mid = (low + high) / 2;
        if(a[mid] == key)
            return 1;
        else if(a[mid] < key)
            low = mid + 1;
        else  
            high = mid -1;
    }
    return -1;
}

int main()
{
    int arr[6] = {3,4,5,6,7,8};

    int a = b_search(arr,0,5,10);
    if(a == 1)
    printf("find\n");
    else 
    printf("not find\n");

}
