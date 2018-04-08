/*************************************************************************
	> File Name: search_rec_num.cpp
	> Author:    orange
	> Mail:      huiyi950512@gmail.com
	> Created Time: 2018年04月05日 星期四 11时12分19秒
 ************************************************************************/

#include <iostream>
#include<vector>
using namespace std;

bool Find(int target, vector<vector<int> > vec) {
    if(vec.empty())
        return false;
    bool found = false;
    unsigned long  row = 0;
    unsigned long column = vec[0].size() - 1;

    while(row < vec.size() && column >= 0)
    {
        if(vec[row][column] == target)
        {
            found = true;
            break;
        }
        else if(vec[row][column] > target)
            --column;
        else if(vec[row][column] < target)
            ++row;
    }
    return found;

}
int main()
{
    int a[4][4] = {{1,2,8,9},
                   {2,4,9,12},
                    {4,7,10,13 },
                    {6,8,11,15}};
    std::vector<vector<int> > vec(4,vector<int>(4));
    for(int i = 0 ; i < 4; i ++ )
    {
         for(int j = 0 ; j < 4; j ++ )
         {
             vec[i][j] = a[i][j];
         }
    }
    bool found = Find(7,vec);
    if(found)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    

}
