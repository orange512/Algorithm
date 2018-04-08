/*************************************************************************
	> File Name: repalce_table.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月05日 星期四 12时46分56秒
 ************************************************************************/

#include <iostream>
#include<stdio.h>
using namespace std;

void replaceSpace(char *str,int length) {
    if(str == NULL)
        return;
    int count = 0;
    int len = 0;
    int i = 0;
    while(str[i] != '\0')
    {
        len ++;
        
        if(str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    int cur = length+2*count;
    if(cur > length)
        return;
    int original = len;
    int newdex = cur;

    while(original >= 0 && newdex > original)
    {
        if(str[original] != ' ')
        {
            str [newdex--] = str[original];
        }
        else if(str[original] == ' ')
        {
            str [newdex--] = '0';
            str [newdex--] = '2';
            str [newdex--] = '%';
        }
        --original;
    }
    printf("%s",str );

}
int main()
{
    char buf[17] = "hello ni hao";
    replaceSpace(buf,17);
}
