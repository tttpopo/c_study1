#include <stdio.h>
#include <string.h>

char arr[] = {"hello"};
int aa[10];
int i = 0;
char *end = arr;
// 利用地址来进行字符串的计数
// 只要得到末地址减去首地址就可以得到
// 刚好可以漏算字符串末尾的\0

int main()
{
    printf("%d\n", strlen(arr));
    // printf("%d", sizeof(arr));

    // for (i = 0; i < 6; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }
    while (*end != '\0')
    {
        end++;
    }

    printf("%d\n", end - arr);
    // printf("%d", &aa[9] - aa);

    return 0;
}
