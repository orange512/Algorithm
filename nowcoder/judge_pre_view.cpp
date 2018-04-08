/*************************************************************************
	> File Name: judge_pre_view.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 08时08分46秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

bool judge_pre_view(vector<int> vec)
{
    if(vec.size() == 0)
        return false;

    vector<int> left,right;
    int len = vec.size();
    int root = vec[len-1];

    int i = 0,j = 0;
    bool j_left = true,j_right = true;
    for(i = 0 ; i < len - 1 ;i++)
    {
        if(vec[i] < root)
        {
            int temp = vec[i];
            left.push_back(temp);
        }
        else
            break;
    }
    cout<<"i = "<<i<<endl;
    for(j = i ; j < len-1;j++ )
    {
        if(vec[j] > root)
            right.push_back(vec[i]);
        else
            return false;
    }
    if(i > 0)
    {
        j_left = judge_pre_view(left);
    }
    if(i < len -1)
    {
        j_right = judge_pre_view(right);
    }
    return j_left && j_right;
}
int main()
{
    std::vector<int> vec= {5,7,6,9,11,10,8};
    bool k = judge_pre_view(vec);
    if(k)
        cout<< "is pre view"<<endl;
    else
        cout<<"not right"<<endl;
}
