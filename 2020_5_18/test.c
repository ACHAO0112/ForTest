#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

//����ˮ��һƿһԪ��2����ƿ��һƿ��ˮ��20Ԫ�ܺȼ�ƿ
int DrinkSoda(int money)
{
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total = total+empty / 2;
		empty = empty / 2 + empty%2;
	}
	return total;
	
}
int main()
{
	printf("�ж���Ǯ��");
	int money = 0;
	scanf("%d", &money);

	int total = DrinkSoda(money);
	printf("һ���ܺȣ�%dƿ",total);


	system("pause");
	return 0;
}