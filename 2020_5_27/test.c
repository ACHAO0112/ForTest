#include <stdio.h>
#include <windows.h>

#if 0
show(int arr[], int num)
{
	int i = 0;
	for (; i < 10; i++)
	{5
		printf("%d ", arr[i]);
	}
	printf("\n");
}
#endif


//int arr[5];          ��������
//int *parr1[10];      ����ָ������
//int(*parr2)[10];     ��������ָ��
//int(*parr3[10])[5];  ��������ָ�������
show1(int arr[2][5], int num)//int (*arr)[5]  //Ҳ���Ա�ʾ
{
	int i = 0;
	for (; i < num; i++)
	{
		int j = 0;
		for (; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}
int main()
{
	//�������͵���⣺
	//���ܹ⿴ǰ���int����Ҫ��[]�궨Ԫ�ظ���

	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int num = sizeof(arr) / sizeof(arr[0]);//һλ���� ����������/������Ԫ�� �����Ԫ�ظ���
	int arr[2][5] = { {1,2,3,4,5},{6,7,8,9,0} };
	int num = sizeof(arr) / sizeof(arr[0]);    //������м���һά����

	show1(arr, num);
	//show(arr, num);


#if 0
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";//3��4ָ��ͬһ����ʼ��ַ���ڽ�ʡ�ռ�Ŀ��ǣ�helloworldֻ������һ��
	printf("%p %p\n", str3, str4);
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
#endif
#if 0
	char c = 'a';

	//�÷�1
	char *p = &c;
	printf("%d %c\n", *p, *p);

	//�÷�2

	char *s = "hello world";   //ָ������ַ�������ĸs�ĵ�ַ���ַ������� �Լ���\0����
	// const char *s = "hello world";     һ��const���� �������޸��ַ��� (�������ַ�������)
	printf("%s\n", s);
	printf("%s %c %d\n", s, *s, *s);

	char arr[] = "hello world";//����Ϊÿһ���ַ�+\0�ֿ������
	char *ss = arr;
	*ss = 'H';//������޸�

	printf("%s %c %d\n", arr, *ss, *ss);


#endif
	system("pause");

	return 0;
}