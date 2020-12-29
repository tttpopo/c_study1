#include <stdio.h>

int check_sys()
{
    int a = 1;
    char *ap = (char *)&a;
    return *ap; //优秀的写法，直接将0或1返回，可以少一步无意义的判断
}
int main(int argc, char const *argv[])
{
    check_sys() == 1 ? printf("1") : printf("2");
    return 0;
}