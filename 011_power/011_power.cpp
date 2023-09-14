// 011_power.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;

    printf("자연수 입력:");
    scanf_s("%d", &n);

    int pow = 1;    //곱하는 것이므로 초기화를 1로 한다
    //for (int i = 0; i < n; i++)
    //    pow *= 2;
    //printf("2의 %d승은 %d\n", n, pow);
    for (int i = 1; i <= 10; i++) {
        pow *= 2;
        printf("2^%d=%d\n", i, pow);
    }
}
//반복을 몇번 하는가?
//반복을 어떻게 하는가?
//10번 반복
//for(int i=1; i<=10; i++)
//for(int i=0; i<10; i++