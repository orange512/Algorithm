/*************************************************************************
	> File Name: chonfu.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月03日 星期二 11时04分51秒
 ************************************************************************/

#include <iostream>
#include<stdio.h>
using namespace std;


char fun(char *str,int n)
{
    int a[300] = {0};
    for(int i = 0 ; i  < n;i++)
    {
        int k = str[i] -'0';
        if(a[k] == 0)
            a[k] = 1;
        else if(a[k] == 1)
            return str[i];
    }

    return 0;
}

int main()
{
    char str[] = "qwymyad";
    char ch = fun(str,7);
    printf("%c",ch);

}
