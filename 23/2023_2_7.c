#include <stdio.h>

// 2023년 2회 7번
// 실행 결과

int main()
{
    int c = 0;

    for (int i = 1; i <= 2023; i++)
        if (i % 4 == 0)
            c++;

    printf("%d", c);
}