// 004_switch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int choice;

    printf("===메뉴===\n");
    printf("1.새 게임\n");
    printf("2.블러오기 게임\n");
    printf("3.설정 게임\n");
    printf("4.크레딧 게임\n");

    printf("선택:\n");
    scanf_s("%d", &choice);

    if (choice == 1)
        printf("새 게임\n");
    else if (choice == 2)
        printf("불러오기\n");
    else if (choice == 3)
        printf("설정\n");
    else if (choice == 4)
        printf("크레딧\n");
    else
        printf("잘못  입력하셨습니다\n");
}

