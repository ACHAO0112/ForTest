#include <stdio.h>
#include <Windows.h>
#include <assert.h>

	//�ַ�����ת�����
	//��Ŀ���ݣ�
	//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ���ת����ַ�����
	//���磺����S1=AABCD��S2=BCDAA������1
	//����S1=abcd��S2=ACBD������0��
	//AABCD����һ���ַ��õ�ABCDA
	//AABCD���������ַ��õ�BCDAA
	//AABCD����һ���ַ��õ�DAABC

	//1��ʵ���������������
	//2����ν���������Ȼ�󲻶Ͻ��бȽϡ�
//void LeftRotate(char *str, int len, int num)
//{
//	while(num){
//	assert(str);
//	assert(len > 0);
//	assert(num >= 0);
//	char temp = str[0];
//i:max:len - 2;
//	int i = 0;
//	for (; i < len - 1; i++)
//	{
//		str[i] = str[i + 1];
//
//	}
//	str[i] = temp;
//	num--;
//     }
//
//
//}
//void LeftRotate(char *str, int len, int num)
//{
//	//[0,num-1]
//	Reverse(str, 0, num - 1);
//	//[num,len-1]
//	Reserve(str, num, len - 1);
//	//[0,len-1]
//	Reserve(str, 0, len - 1);
//
//}

int Find(int arr[][5], int row, int col, int target)
{
	//���ҵı��ʣ��ų��Ĺ���
	//�����Ͻǿ�ʼ�Ƚϣ�һ�ο����ų�һ�У�����һ��

	int i = 0;
	int j = col - 1;
	while (i < row&&j >= 0)
	{
		if (target < arr[i][j])
		{
			--j;
		}
		else if (target > arr[i][j])
		{
			++i;
		}
		else {
			return 1;
		}
	}
	return -1;
}
int main()
{
	int arr[][5] = {
		{1,  2,  3,  4,  5},
		{11, 22, 33, 44, 55},
	    {111,222,333,444,555}
	};
	int x = 333;
	int ret = Find(arr, 3, 5, x);
	printf("%d\n",ret);





	/*char str1[] = "1234abcd";
	char str2[] = "abcd1234";
	int len = strlen(str1);
	int num = 3;
	printf("before:%s\n", str1);
	int i = 0;
	for (; i < len; i++)
	{
		if (strcmp(str1, str2) == 0)
		{
			printf("yes\n");
			break;
		}
		LeftRotate(str1,len,1);
	}
	if (i == len)
	{
		printf("no!\n");
	}
	printf("after:%s\n", str1);*/





	system("pause");
	return 0;
}