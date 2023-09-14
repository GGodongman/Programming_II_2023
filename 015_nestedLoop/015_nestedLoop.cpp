// 015_nestedLoop.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

//n을 입력받아 n개의 별을 n개의 줄로 나타내시오

int main()
{
    int n;
    scanf_s("%d",& n);
    //n개의 별을 출력
    
    
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }

}

