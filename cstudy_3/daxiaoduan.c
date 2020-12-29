#include <stdio.h>
// 1/直接写在主函数里
// int main()
// {
//     int a = 1;
//     char *ap = (char *)&a;
//     if (*ap == 1)
//     {
//         printf("小");
//     }
//     else
//     {
//         printf("大");
//     }

//     return 0;
// }

// 2/推荐使用封装函数，可以更简洁更方便
int check_sys()
{
    int a = 1;
    char *ap = (char *)&a;
    return *ap; //推荐的写法，直接将0或1返回，可以少一步无意义的判断
    // 还可以再浓缩
    // return *(char*)&a;
}
int main(int argc, char const *argv[])
{
    if (check_sys() == 1)
    {
        printf("1");
    }
    else
    {
        printf("2");
    }

    return 0;
}
//check_sys() == 1 ? printf("1") : printf("2");
//其实还可以用三目运算，更简洁

/*
存储方式有两种，一种是小端存储一种是大端存储
决定了字节在内存中的顺序
这段代码可以判断到底是哪一种
先创建一个int变量
然后把地址给char*类型的变量
这样就可以知道int类型四个字节的第一个字节的内容
然后就可以判断了
*/

// 指针类型的意义
// 1决定了指针解引用操作符能访问几个字节
// 2决定了加减1的时候到底加的是几个字节