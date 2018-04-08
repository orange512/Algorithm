/*************************************************************************
	> File Name: save.c
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年03月25日 星期日 15时44分23秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//拯救小一

unsigned int cal(int x,int y)
{
    return x*x+y*y;
}
int judge(int x[],int y[],int a )
{
    int flag;
    unsigned int temp = 0xFFFFFFF;
    for(int i= 0 ; i < a;i++)
    {
        unsigned int a = cal(x[i],y[i]);
        if(a < temp)
        {
            flag = i;
            temp = a;
        }
    }
    return flag;
}

int main()
{
    int a;
    scanf("%d",&a);
    int x[a];
    int y[a];
    for(int i = 0 ; i  < a;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j = 0;j < a;j++)
    {
        scanf("%d",&y[j]);
    }
    int flag = judge(x,y,a);

    printf("%d",x[flag]-1 + y[flag] - 1);
    return 0;
    
}
