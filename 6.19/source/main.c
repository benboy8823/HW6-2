#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <direct.h>
#include<time.h>
#define LENGTH  36000
int main()
{
	int dice1, dice2, num[11] = { 0 };

	srand(time(NULL));

	for (int i = 0; i < LENGTH; i++)
	{
		dice1 = rand() % 7 + 1;
		dice2 = rand() % 7 + 1;

		if ((dice1 + dice2) == 2)
		{
			num[0]++;
		}

		else if ((dice1 + dice2) == 3)
		{
			num[1]++;
		}
		else if ((dice1 + dice2) == 4)
		{
			num[2]++;
		}
		else if ((dice1 + dice2) == 5)
		{
			num[3]++;
		}
		else if ((dice1 + dice2) == 6)
		{
			num[4]++;
		}
		else if ((dice1 + dice2) == 7)
		{
			num[5]++;
		}
		else if ((dice1 + dice2) == 8)
		{
			num[6]++;
		}
		else if ((dice1 + dice2) == 9)
		{
			num[7]++;
		}
		else if ((dice1 + dice2) == 10)
		{
			num[8]++;
		}
		else if ((dice1 + dice2) == 11)
		{
			num[9]++;
		}
		else if ((dice1 + dice2) == 12)
		{
			num[10]++;
		}
	}
	for (int i = 0; i < 11; i++)
	{
		printf("��X�I�Ƭ�%2d���զX�`�@��%02d��\n", i + 2, num[i]);
	}

	printf("\n");
	if (num[5] <= (LENGTH / 6) - 500 || num[5] >= (LENGTH / 6) + 500)
	{
		printf("�]��7���զX������榸�ƪ�6�����@�ҥH�X�z\n");
	}
	else
	{
		printf("�]��7���զX��������榸�ƪ�6�����@�ҥH���X�z\n");
	}

	system("pause");
	return(0);
}
