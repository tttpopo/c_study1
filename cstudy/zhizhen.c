#include <stdio.h>

int main()
{
    char i = 0;
    //int i = 0;
    int arr[] = {23, 23, 23, 23, 23, 23, 23, 23, 23, 23};

    int *ap = arr;

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    //这种赋值方法，最后一次循环的时候，指针变量存放的已经不是数组范围内的地址了，指针越界（野指针）
    // for (i = 0; i < 10; i++)
    // {
    //     *ap = i;
    //     ap++;
    // }

    //推荐这种赋值，不会越界
    for (i = 0; i < 10; i++)
    {
        *(ap + i) = i;
    }

    return 0;
}