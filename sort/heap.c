/*************************************************************************
	> File Name: heap.c
	> Author:   Orange512
	> Mail:     huiyi950512@gmail.com
	> Created Time: 2018年03月24日 星期六 20时19分43秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define LEFTCHILD(i) (2*(i)+1)
void heap_down(int *a,int len,int i)
{
    //字节点的索引号
    int child;
    //存储父节点元素的临时变量
    int temp;

    for(temp = a[i];LEFTCHILD(i) < len;i = child)
    {
        child = LEFTCHILD(i);
        //挑选出左右节点最大的元素
        if(child != len - 1 && a[child + 1] > a[child])
        {
            child++;
        }
        //比较当前元素与父节点大小
        if(a[i] < a[child])
        {
            temp = a[i];
            a[i] = a[child];
            a[child] = temp;
        }
        else 
        {
            break;
        }
    }
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Heapsort(int a[],int n)
{
    int i ;
    //创建大根堆
    for(i = n/2;i >= 0 ;i--)
    {
        heap_down(a,n,i);
    }
    //调整大根堆
    for(i = n -1; i > 0; i--)
    {
        //首尾交换
        swap(&a[0],&a[i]);
        //元素下沉
        heap_down(a,i,0);
    }

}
int main()
{
    int a[6] = { 4,5,3,2,1,6 };
    Heapsort(a,6);
    for(int i = 0; i < 6;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
