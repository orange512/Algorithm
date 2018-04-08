/*************************************************************************
	> File Name: cars_seq.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 17时00分55秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

bool IsContinuous( vector<int> numbers )
{
    if(numbers.empty())
        return false;
    int max = -1;
    int min = 14;
    int count[14] = {0};//记录每个牌的出现
    int len = numbers.size();
    int i = 0;

    for(i = 0;i<len;i++)
    {
         count[numbers[i]]++;
        if(numbers[i] == 0)
            continue;
        if(count[numbers[i]] > 1)
            return false;
        if(numbers[i] > max)
            max = numbers[i];
        if(numbers[i] < min)
            min = numbers[i];
    }
    if(max - min < 5)
        return true;
    else
        return false;
}
int main()
{
    vector<int> vec = {0,5,6,7,8};
    bool k = IsContinuous(vec);
    if(k)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
