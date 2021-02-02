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


//int arr[5];          整型数组
//int *parr1[10];      整型指针数组
//int(*parr2)[10];     整型数组指针
//int(*parr3[10])[5];  整型数组指针的数组
show1(int arr[2][5], int num)//int (*arr)[5]  //也可以表示
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
	//数组类型的理解：
	//不能光看前面的int，更要看[]标定元素个数

	//int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int num = sizeof(arr) / sizeof(arr[0]);//一位数组 就是求数组/数组首元素 ，求出元素个数
	int arr[2][5] = { {1,2,3,4,5},{6,7,8,9,0} };
	int num = sizeof(arr) / sizeof(arr[0]);    //求的是有几个一维数组

	show1(arr, num);
	//show(arr, num);


#if 0
	char str1[] = "hello bit.";
	char str2[] = "hello bit.";
	char *str3 = "hello bit.";
	char *str4 = "hello bit.";//3和4指向同一个起始地址出于节省空间的考虑，helloworld只保存了一次
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

	//用法1
	char *p = &c;
	printf("%d %c\n", *p, *p);

	//用法2

	char *s = "hello world";   //指向的是字符串首字母s的地址，字符串长度 以见到\0结束
	// const char *s = "hello world";     一般const修饰 代表不可修改字符串 (保存在字符常量区)
	printf("%s\n", s);
	printf("%s %c %d\n", s, *s, *s);

	char arr[] = "hello world";//这里为每一个字符+\0分开保存的
	char *ss = arr;
	*ss = 'H';//这里可修改

	printf("%s %c %d\n", arr, *ss, *ss);


#endif
	system("pause");

	return 0;
}