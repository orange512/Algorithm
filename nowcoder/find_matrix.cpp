/*************************************************************************
	> File Name: find_matrix.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年03月09日 星期五 10时31分29秒
 ************************************************************************/

#include<iostream>
using namespace std;
/*bool Find(int *matrix, int rows,int columns,int number)
{
    for(int i = 0;i<rows*columns;i++)
    {
        cout<<"  "<<matrix[i];
        if((i+1)%rows == 0)
        cout<<endl;
    }
    bool found = false;

    if(matrix != NULL && rows > 0 && columns > 0)
    {
        int row = 0;
        int column = columns - 1;
        while(row < rows && column >= 0)
        {
            if(matrix[row * columns + column] == number)
            {
                found = true;
                break;
            }
            else if(matrix[rows *columns + column] > number)
                --column;
            else
                ++row;
        }
    }
    return found;
}*/
bool Find(int matrix[][4],int rows,int columns,int number)
{
    bool found = false;
    int row = 0;
    int column = columns - 1;
    while(row < rows && column >= 0)
    {
        if(matrix[row][column] == number)
        {
            found = true;
            break;
        }
        else if(matrix[row][column] > number)
            --column;
        else
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
    bool found = Find(a,4,4,0);
    if(found)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
}

