/*************************************************************************
	> File Name: b_search.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月03日 星期二 10时33分34秒
 ************************************************************************/

#include <iostream>
using namespace std;

class BinarySearch
{
public:
    int getPos(vector<int> A, int n, int val) {
        int left = 0;
        int right = n-1;
        while(left <= right)
        {
            int mid = (left+right)/2;
            if(A[mid] == val)
                return mid;
            else if(A[mid] > val)
                right = mid - 1;
            else if(A[mid] < val)
                left = mid + 1;
        }
        
    }

};
std::vector<char> A;
int main()
{
    char ch;
    int i = 0;
    ch = getchar();
    while(ch != ']')
    {
        A[i] = ch;
        ch = getchar();
    }
}
