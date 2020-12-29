#include <stdio.h>

int main()
{
    int a = 1;
    char *ap = (char *)&a;
    if (*ap == 1)
    {
        printf("小");
    }
    else
    {
        printf("大");
    }

    return 0;
}

/*
存储方式有两种，一种是小端存储一种是大端存储
决定了字节在内存中的顺序
这段代码可以判断到底是哪一种
先创建一个int变量
然后把地址给char*类型的变量
这样每次加一就只加一个字节
这样就可以知道int类型四个字节的第一个字节的内容
然后就可以判断了
*/
