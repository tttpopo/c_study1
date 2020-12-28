#include <stdio.h>

typedef struct Stu
{
    int age;
    char name[5];
} Stu;

void print1(Stu tmp)
{
    printf("age:%d\n", tmp.age);
    printf("name:%s\n", tmp.name);
}

void print2(Stu *ps)
{
    printf("age:%d\n", ps->age);
    printf("name:%s\n", ps->name);
}

int main()
{
    Stu ss = {20, "haha"};
    print1(ss);
    printf("***************************\n");
    print2(&ss);
    return 0;
}
// 使用了两种方法打印一个结构体里面的数据
// 推荐print2，因为直接操作的地址
// 所以不用在开一块新空间
// 速度也会快一点