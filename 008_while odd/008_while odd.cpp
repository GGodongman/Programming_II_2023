// 008_while odd.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int n;
    printf("n을 입력하세요");
    scanf_s("%d", &n);
    //반복해서 홀수를 출력
    //1.초기값 : i=1
    //2.반복하는 조건:i<n
    //3.변화:i++
    int i = 1;
    while (i <= n){
        if (i % 2 ==1 )
            printf("%d\n",i);
        i++;
    }

}
