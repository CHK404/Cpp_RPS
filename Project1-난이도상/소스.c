#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>																	//난수 생성을 위한 헤더파일 추가
#include <time.h>																	//시간 함수 사용을 위한 헤더파일 추가
#include <stdio.h>

int main()
{
	int a = 0, b = 0, A = 0;
	int play = 0, lose = 0, draw = 0, win = 0;										//int 형 변수 선언 및 초기화

	while (1)
	{
		printf("  [가위,바위,보!]\n");
		printf(">>Select Menu\n");
		printf("1.게임시작\n");
		printf("2.전적 보기\n");
		printf("3.게임 종료\n");
		printf(">>메뉴를 선택하세요! ");											//메뉴 출력
		scanf("%d", &A);															//A에 변수 입력받기
		srand(time(NULL));															//랜덤변수를 위한 시간상수
		if (A == 1)																	//A가 1일때
		{
			while (1)																//무한반복
			{
				printf(">> 0.가위  1.바위  2.보\n");
				printf(">> 무엇을 내겠습니까?");
				scanf("%d", &a);
				b = (rand() % 2) + 0;												//0에서 2사이의 랜덤변수 생성

				if (a == 0)															//a가 0일때
				{
					if (b == 0)														//b가 0일때
					{
						printf(" > Player: 가위\n");
						printf(" > Computer: 가위\n\n");
						printf(">> Result: Draw!\n");
						draw++;														//출력 후 게임횟수와 무승부 횟수 1추가
					}
					else if (b == 1)
					{
						printf(" > Player: 가위\n");
						printf(" > Computer: 바위\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//출력 후 게임횟수와 패배 횟수 1추가 후 초기화면으로
					}
					else if (b == 2)
					{
						printf(" > Player: 가위\n");
						printf(" > Computer: 보\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//출력 후 게임 횟수와 승리 횟수 1추가
					}
				}
				else if (a == 1)
				{
					if (b == 0)
					{
						printf(" > Player: 바위\n");
						printf(" > Computer: 가위\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//출력 후 게임 횟수와 승리 횟수 1추가
					}
					else if (b == 1)
					{
						printf(" > Player: 바위\n");
						printf(" > Computer: 바위\n\n");
						printf(">> Result: Draw!\n");
						play++;
						draw++;														//출력 후 게임 횟수와 무승부 횟수 1추가
					}
					else if (b == 2)
					{
						printf(" > Player: 바위\n");
						printf(" > Computer: 보\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//출력 후 게임 횟수와 패배 횟수 1추가 후 초기화면으로
					}
				}
				else if (a == 2)
				{
					if (b == 0)
					{
						printf(" > Player: 보\n");
						printf(" > Computer: 가위\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//출력 후 게임 횟수와 패배 횟수 1추가 후 초기화면으로
					}
					else if (b == 1)
					{
						printf(" > Player: 보\n");
						printf(" > Computer: 바위\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//출력 후 게임 횟수와 승리 횟수 1추가
					}
					else if (b == 2)
					{
						printf(" > Player: 보\n");
						printf(" > Computer: 보\n\n");
						printf(">> Result: Draw!\n");
						play++;
						draw++;														//출력 후 게임 횟수와 무승부 횟수 1추가
					}
				}
				printf("\n\n");														//두줄 내리기				
			}
		}
		else if (A == 2)
		{
			printf(">> 이전판 가위바위보 성적입니다.\n");
			printf(">>Total Score");
			printf(">> %d전 %d승 %d무 %d패\n", play, win, draw, lose);				//이전 전적 출력
		}
		else if (A == 3)
		{
			printf(">>게임을 종료합니다.");
			return 0;																//종료 안내문 출력 및 종료
		}
		else
		{
			printf("잘못된 메뉴 선택입니다. 다시 선택해 주세요.\n");				//잘못된 선택 안내 출력
		}
	}
	return;
}
