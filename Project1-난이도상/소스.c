#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>																	//���� ������ ���� ������� �߰�
#include <time.h>																	//�ð� �Լ� ����� ���� ������� �߰�
#include <stdio.h>

int main()
{
	int a = 0, b = 0, A = 0;
	int play = 0, lose = 0, draw = 0, win = 0;										//int �� ���� ���� �� �ʱ�ȭ

	while (1)
	{
		printf("  [����,����,��!]\n");
		printf(">>Select Menu\n");
		printf("1.���ӽ���\n");
		printf("2.���� ����\n");
		printf("3.���� ����\n");
		printf(">>�޴��� �����ϼ���! ");											//�޴� ���
		scanf("%d", &A);															//A�� ���� �Է¹ޱ�
		srand(time(NULL));															//���������� ���� �ð����
		if (A == 1)																	//A�� 1�϶�
		{
			while (1)																//���ѹݺ�
			{
				printf(">> 0.����  1.����  2.��\n");
				printf(">> ������ ���ڽ��ϱ�?");
				scanf("%d", &a);
				b = (rand() % 2) + 0;												//0���� 2������ �������� ����

				if (a == 0)															//a�� 0�϶�
				{
					if (b == 0)														//b�� 0�϶�
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: Draw!\n");
						draw++;														//��� �� ����Ƚ���� ���º� Ƚ�� 1�߰�
					}
					else if (b == 1)
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//��� �� ����Ƚ���� �й� Ƚ�� 1�߰� �� �ʱ�ȭ������
					}
					else if (b == 2)
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ��\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//��� �� ���� Ƚ���� �¸� Ƚ�� 1�߰�
					}
				}
				else if (a == 1)
				{
					if (b == 0)
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//��� �� ���� Ƚ���� �¸� Ƚ�� 1�߰�
					}
					else if (b == 1)
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: Draw!\n");
						play++;
						draw++;														//��� �� ���� Ƚ���� ���º� Ƚ�� 1�߰�
					}
					else if (b == 2)
					{
						printf(" > Player: ����\n");
						printf(" > Computer: ��\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//��� �� ���� Ƚ���� �й� Ƚ�� 1�߰� �� �ʱ�ȭ������
					}
				}
				else if (a == 2)
				{
					if (b == 0)
					{
						printf(" > Player: ��\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: Computer Win!\n");
						play++;
						lose++;
						break;														//��� �� ���� Ƚ���� �й� Ƚ�� 1�߰� �� �ʱ�ȭ������
					}
					else if (b == 1)
					{
						printf(" > Player: ��\n");
						printf(" > Computer: ����\n\n");
						printf(">> Result: You Win!\n");
						play++;
						win++;														//��� �� ���� Ƚ���� �¸� Ƚ�� 1�߰�
					}
					else if (b == 2)
					{
						printf(" > Player: ��\n");
						printf(" > Computer: ��\n\n");
						printf(">> Result: Draw!\n");
						play++;
						draw++;														//��� �� ���� Ƚ���� ���º� Ƚ�� 1�߰�
					}
				}
				printf("\n\n");														//���� ������				
			}
		}
		else if (A == 2)
		{
			printf(">> ������ ���������� �����Դϴ�.\n");
			printf(">>Total Score");
			printf(">> %d�� %d�� %d�� %d��\n", play, win, draw, lose);				//���� ���� ���
		}
		else if (A == 3)
		{
			printf(">>������ �����մϴ�.");
			return 0;																//���� �ȳ��� ��� �� ����
		}
		else
		{
			printf("�߸��� �޴� �����Դϴ�. �ٽ� ������ �ּ���.\n");				//�߸��� ���� �ȳ� ���
		}
	}
	return;
}
