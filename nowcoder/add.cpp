/*************************************************************************
	> File Name: add.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月09日 星期一 08时58分38秒
 ************************************************************************/

#include <iostream>
using namespace std;

int add(int num1,int num2)
{
    int sum,carry;
    do
    {
        sum  = num1 ^ num2;
        carry = (num1 & num2) << 1;

        num1 = sum;
        num2 = carry;
    }while(num2 != 0);
    return num1;
}

int main()
{
    int k = add(8,9);
    cout<<k<<endl;

}
