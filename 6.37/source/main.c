#include<stdlib.h>
#include<stdio.h>

int main()
{
	int a[8];
	printf("請輸入8個數字：\n");
	for (int i = 0; i < 8; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("Maximum value of the array is: %d", maximum(a, 0, 8));
	system("pause");
	return 0;

}

int maximum(int a[], int i, int n)
{
	if (i == n) return a[n];
	else
	{
		if(a[i] < maximum(a, i + 1, n))
		{
			return maximum(a, i + 1, n);
		}
		else
			return a[i];

	}
}