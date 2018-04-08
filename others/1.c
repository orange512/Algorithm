/*************************************************************************
	> File Name: 1.c
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年03月27日 星期二 19时17分24秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int count[1000] = {0};
int judge(char buff[][1001],int test,int len[])
{
    if(test < 0)
        return -1;
    for(int i = 0 ; i < test;i++)
    {
        char *p = buff[i];
        for(int j = 0 ; j < len[i];j++)
        {
            if(buff[i][j] == '.')
            {
                count[i]++;
                p++;
            }
        }
    }
    return 0;
}
int main()
{
    int test = 0 ;
    scanf("%d",&test);
    char buff[test][1001];
    int len[test];
    for(int i =0;i < test;i++)
    {
        scanf("%d",&len[i]);
        scanf("%s",buff[i]);
    }
    judge(buff,test,len);

    for(int i =0 ;i < test;i++)
    {
        if(count[i]< 3)
        {
            printf("1\n");

        }
        else
        {
            int flag = 0;
            while(count[i]-3 >= 3)
            {
                flag++;
            }
            printf("%d\n",flag+1);
        }
    }
    return 0;


}
