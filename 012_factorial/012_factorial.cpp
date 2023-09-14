// 012_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int i = 1;
    int n = 0;
    printf("n을 입력 :");

    scanf_s("%d", &n);
    while (n != 1) {
        i = i * n;
        n--;

    }
    printf(" %d,", i);



    int x;
    for (;;) {
        printf("0을 입력할 때까지 계속됩니다");
        scanf_s("%d", &x);
        if (x == 0)
            break;
    }
}

