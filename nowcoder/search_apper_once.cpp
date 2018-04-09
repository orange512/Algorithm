/*************************************************************************
	> File Name: search_apper_once.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月09日 星期一 14时47分38秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

unsigned int search_bit_index_one(int key)
{
    unsigned int count = 0;
    while( ((key & 1) == 0) && count < 8 * sizeof(int))
    {
        key  = key >> 1;
        ++count;
    }
    return count;
}
bool is_bit_1(int num1,unsigned int index_1)
{
    num1 = num1>>index_1;
    return (num1 & 1);
}

void search_apper_once(vector<int> input,int *num1,int *num2)
{
    int len = input.size();
    if(len < 2)
        return;
    int result_xor = 0;
    //让数组每个数字异或　找到出现一次的数　其中比特必然会有１
    for(int i = 0 ; i < len;i++)
    {
        result_xor ^= input[i];
    }
    //寻找比特位的下标
    unsigned int bit_index_one = search_bit_index_one(result_xor);
    cout<<"bit_index_one:"<<bit_index_one<<endl;

    //将哪一位的下标为１和为０分为两组　　对每组中的数字在异或找出其中一个出现一次的数
    *num1 = *num2 = 0;
    for(int j = 0 ; j < len;j++)
    {
        if(is_bit_1(input[j],bit_index_one)) //当前数字的比特为１
        {
            *num1 ^= input[j];
        }
        else
            *num2 ^= input[j];
    }
    return;

}
int main()
{
    std::vector<int> vec = {2,3,2,3,1,4};
    int num1 = 0;
    int num2 = 0;
    search_apper_once(vec,&num1,&num2);
    cout<<"num1:"<<num1<<"  num2 :"<<num2<<endl;
    return 0;
}
