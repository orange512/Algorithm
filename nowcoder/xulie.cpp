/*************************************************************************
	> File Name: xulie.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 17时16分08秒
 ************************************************************************/

#include <iostream>
#include<list>
#include<vector>
using namespace std;
//  ｎ－１是小朋友的个数　m 是隔几个人报数
int LastRemaining_Solution(int n, int m)
{
    /* std::list<int> mylist(n-1); */
    /* int i = 0; */
    /* for(auto iter1 = mylist.begin();iter1 != mylist.end();iter1++) */
    /* { */
    /*     mylist.push_back(i); */
    /*     i++; */
    /* } */
    /* for(int i = ) */
    /* return 0; */
    std::vector<int> vec;
    int count = 0;
    for(int i = 0 ; i < n;i++)
        vec[i] = i;
    auto cur_index = vec.begin();
    while(vec.size() > 1)
    {
        if(count == m)
        {
            vec.erase(cur_index);
            count = 0;
            if(cur_index == vec.end())
                cur_index = vec.begin();
            cur_index--;
        }
        count++;
        if(cur_index == vec.end())
            cur_index = vec.begin();
        cur_index++;

    }
    int key = vec.back();
    return key;
}
int main()
{
    int key = LastRemaining_Solution(4,2);
    cout<<key<<endl;
}
