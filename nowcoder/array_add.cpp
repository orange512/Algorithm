/*************************************************************************
	> File Name: array_add.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月09日 星期一 16时53分40秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

bool find_two_int_with_sum(vector<int> data,int sum,int *num1,int *num2)
{
    int len = data.size();
    if(len < 2)
        return false;
    bool found = false;
    int begin = 0;
    int end = len - 1;

    while(begin < end)
    {
        long cur_sum = data[begin]+data[end];
        if(cur_sum == sum)
        {
            *num1 = data[begin];
            *num2 = data[end];
            found = true;
            //break;
            
            cout<<"num1: "<<*num1<<"  num2:"<<*num2<<endl;
            begin++;
        }
        else if( cur_sum > sum)
            end--;
        else
            begin++;
            
    }
    return found;
}
int main()
{
    std::vector<int> data = {1,4,5,6,8,9,23};
    int num1 = 0; 
    int num2 = 0;
    if(find_two_int_with_sum(data,14,&num1,&num2))
    {
        cout<<"num1: "<<num1<<"  num2:"<<num2<<endl;
    }
    else
         cout<<"not found"<<endl;
    return 0;
}
