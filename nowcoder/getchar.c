/*************************************************************************
	> File Name: getchar.c
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月05日 星期四 13时29分53秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void nixu()
{
    char ch;
    ch = getchar();
    if(ch != '\n')
    {
        nixu();
        printf("%c",ch);
    }
}
int main()
{
    nixu();
}
