/*************************************************************************
	> File Name: quick_sort.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 10时54分23秒
 ************************************************************************/

#include <iostream>
using namespace std;

int myqsort(int a[],int begin,int end)
{
    if(begin >= end)
        return 1;
    int low = begin;
    int high = end-1;
    int key = a[begin];
    while(low < high)
    {
        while(a[high] >= key && low < high)
        {
            high--;
        }
        a[low] = a[high];
        while(a[low] < key && low < high)
        {
            low++;
        }
        a[high] = a[low];
    }
    a[low] = key;
    myqsort(a,begin,low-1);
    myqsort(a,low+1,end);
    return 0;
}
int main()
{
    int a[6] = {5,7,8,24,3,1};
    myqsort(a,0,6);
    for(int i = 0 ; i < 6;i++)
    {
        cout<<a[i]<<" ";
    }
}
