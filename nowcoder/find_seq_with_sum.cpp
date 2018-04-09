/*************************************************************************
	> File Name: find_seq_with_sum.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月09日 星期一 17时12分47秒
 ************************************************************************/

#include <iostream>
using namespace std;

void print_seq(int small,int big)
{
    for(int i = small;i <= big;i++)
        cout<<i<<" ";
    cout<<endl;
}
void find_seq_with_sum(int sum)
{
    if(sum < 3)
        return;
    int small = 1;
    int big = 2;
    int cur_sum = small + big ;
    int middle = (1 + sum) / 2;

    while(small < middle)
    {
        if(cur_sum == sum)
            print_seq(small,big);

        while(cur_sum > sum && small < middle )
        {
            cur_sum -= small;
            small++;

            if(cur_sum == sum)
                print_seq(small,big);
        }
        big++;
        cur_sum += big;
    }
}
int main()
{
    find_seq_with_sum(18);
    return 0;
}
