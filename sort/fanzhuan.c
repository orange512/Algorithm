/*************************************************************************
	> File Name: fanzhuan.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月20日 星期二 20时03分43秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ch[100];
    while(gets(ch))
    {
        if(strlen(ch)==0) break;
        for(int i=strlen(ch)-1;i>=0;i--)
        {
            printf("%c",ch[i]);
        }
        printf("\n");


    }
    return 0;

}
