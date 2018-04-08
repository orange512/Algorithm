/*************************************************************************
	> File Name: adjust_array2.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月03日 星期二 22时41分22秒
 ************************************************************************/

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*void re_order_array(vector<int> &A)
{
    vector<int> temp_array;
    vector<int>::iterator ib1;
    ib1 = A.begin();
    for(;ib1 != A.end();)
    {
        if(*ib1 % 2 == 0)
        {
            temp_array.push_back(*ib1);
            ib1 = A.erase(ib1);
        }
        else
            ib1++;
    }
    for(auto key: temp_array)
    {
        A.push_back(key);
    }
}*/
bool is_ok(int n)
{
    return ((n & 1) == 1);
}
void re_order_array(vector<int> &A)
{
    stable_partition(A.begin(),A.end(),is_ok);
}
int main()
{
    vector<int> A ={2,5,6,7,3,2,4};
    for(auto i:A)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    re_order_array(A);
    for(auto i:A)
    {
        cout<<i<<" ";
    }
}
