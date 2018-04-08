/*************************************************************************
	> File Name: reverse_str.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月08日 星期日 15时23分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
 
string ReverseSentence(string str)
{
    int len = str.size();
    int start = 0;
     for(int i = 0; i < len; i ++)
     {
         if(str[i] == ' ')
         {
             reverse(str.begin()+start, str.begin()+i);
             start = i+1;
         }
         if(i == len-1)
         {
             reverse(str.begin()+start, str.end());
         }
     }
     reverse(str.begin(), str.end());
     return str;
}
int main()
{
    string a = "hello am I";
    string b = ReverseSentence(a);
    cout<<b<<endl;
}
