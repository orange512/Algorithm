/*************************************************************************
	> File Name: min_xuanzhuan.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月06日 星期五 13时41分02秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;
int minNumberInRotateArray(vector<int> rotateArray) 
{
    if(rotateArray.size() == 0)
        return 0;

    int len = rotateArray.size();
    int index = 0;
    for(int i = 0; i < len;i++ )
    {
        if(rotateArray[i] > rotateArray[i+1])
        {
            index = i;
            break;
        }
    }
    return rotateArray[index+1];
}
int main()
{
    std::vector<int> a= {3,4,5,1,2};

    cout<<minNumberInRotateArray(a)<<endl;
}
