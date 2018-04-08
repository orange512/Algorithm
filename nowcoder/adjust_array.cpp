/*************************************************************************
	> File Name: adjust_array.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月03日 星期二 20时43分55秒
 ************************************************************************/

#include <iostream>
using namespace std;
#include<vector>


void swap(int *a,int *b)
{
    int temp = *a;
    *a= *b;
    *b = temp;
}
void re_order_array(vector<int> &A)
{
    /* int size = A.size(); */
    for(int i = 0; i < A.size();i++)
    {
        for(int j = A.size()-1;j > i;j--)
        {
            if(A[j] % 2 == 1 && A[j - 1] % 2 == 0)
            {
                swap(&A[j],&A[j-1]);
            }
        }
    }
}
int main()
{
    std::vector<int> A = {1,2,3,4,7,9,3,4,8,1};
    re_order_array(A);

    for(auto i : A)
    {
        cout<<i<<" ";
    }
}

