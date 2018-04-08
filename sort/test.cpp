/*************************************************************************
> File Name: test.cpp
> Author:   Orange512
> Mail:     huiyi950512@gmail.com
> Created Time: 2018年03月22日 星期四 17时41分28秒
************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    int a[]={98,76,109,34,67,190,80,12,14,89,1};
    int k=sizeof(a)/sizeof(a[0]);
    int j;
    for(int i=1;i<k;i++)//循环从第2个元素开始
    {
        if(a[i]<a[i-1])
        {
            int temp=a[i];
            for(j=i-1;j>=0 && a[j]>temp;j--)
            {
                a[j+1]=a[j];

            }
            a[j+1]=temp;//此处就是a[j+1]=temp;

        }

    }
    for(int f=0;f<k;f++)
    {
        cout<<a[f]<<"  ";

    }    return 0;

}

