#include <stdio.h>
#include <windows.h>

unsigned char i = 0;

//查找凶手
//嫌烦供词 
//A说不是我
//B说是C
//C说是D
//D说C在胡说
//已知三个人说了真话一个人说了假话，找出凶手


void FindKiller()
{
	char killer = 'A';
	for (; killer <= 'D'; killer++)
	{
		//分析情况：
		//killer !='A'
		//killer  ='C'
		//killer  ='D'
		//killer !='D'

		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3) {
			printf("find you: %c\n", killer);
		}
		   
	}
	
}

//猜名次
void Game()
{
	int a = 1;
	for (; a <= 5; a++)
	{
		int b = 1;
		for (; b <= 5; b++)
		{
			int c = 1;
			for (; c <= 5; c++)
			{
				int d = 1;
				for (; d <= 5; d++)
				{
					int e = 1;
					for (; e <=5; e++)
					{
						if (((b == 2) + (a == 3) == 1) && \
							((b == 2) + (e == 4) == 1) && \
							((c == 1) + (d == 2) == 1) && \
							((c == 5) + (d == 3) == 1) && \
							((e == 4) + (a == 1) == 1) )
						{
							unsigned char flag = 0;
							flag |= (1 << (a - 1));
							flag |= (1 << (b - 1));
							flag |= (1 << (c - 1));
							flag |= (1 << (d - 1));
							flag |= (1 << (e - 1));
							while (flag) {
								if (!(flag & 1)) {
									break;
								}
								flag >>= 1;
							
							}
							if (!flag) {

						printf("a: %d b: %d c: %d d: %d e: %d\n", a, b, c, d, e);
							}

						}
					}
				}
			}
		}
	}
}
//打印杨辉三角
void Show()
{
	int arr[10][10];
	int i = 0;
	int j = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			arr[i][j] = 1;
		}
	}

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{

	int n = 9;
	float *fp =(float *) &n;



	printf("%d\n", n);
	printf("%f\n", *fp);
	//FindKiller();
	//Game();


	//Show();
	//7
	//for (i = 0; i <= 255; i++)
	//{
	//	//死循环 [0-255]周期性
	//	printf("hello world\n");
	//}
	//6
	/*char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d", strlen(a));*/   //求字符串长度 遇到\0就停。

	
	system("pause");
	return 0;
}