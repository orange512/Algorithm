/*************************************************************************
	> File Name: 1.c
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月05日 星期四 15时31分15秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int sum(int n,int m)
{
    int sum = 0;
    int count = 0;
    for(int i = 1 ; i <= n;)
    {
        if(count != m)
        {
            sum += (i-2*i);
            count++;
            i++;
        }
        else
        {
            count=0;
            for(int j = 1; j <= m;j++)
            {
                sum+=(i++);
            }
        }
        
    }
    return sum;
}

int main()
{
    int n;
    int m;
    scanf("%d %d",&n,&m);
    if(n % (2 *m) == 0 && n >= m && n >= 2 && n <= 1000000000 && 1<= m)
    {
        int a = sum(n,m);
        printf("%d\n",a);
    }
}
