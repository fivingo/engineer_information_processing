#include <stdio.h>

// 2022년 1회 18번
// 5 입력시 실행 결과

int func(int a)
{
    if (a <= 1) return 1;

    return a * func(a - 1);
}

int main()
{
    int a;

    scanf("%d", &a);

    printf("%d", func(a));
}