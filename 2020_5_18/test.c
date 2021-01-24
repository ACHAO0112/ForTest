#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

//喝汽水，一瓶一元，2个空瓶换一瓶汽水，20元能喝几瓶
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
	printf("有多少钱：");
	int money = 0;
	scanf("%d", &money);

	int total = DrinkSoda(money);
	printf("一共能喝：%d瓶",total);


	system("pause");
	return 0;
}