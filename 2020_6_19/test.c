#include <stdio.h>
#include <Windows.h>



struct A {
	char a[3];
	double b;
	short *c;
};//24

struct B {
	double b;
	char a[3];
	short **c;
};//16
struct C {
	short c;
	char a;
	double *b[3];
	
};//16
//枚举类型本质是int，而且默认情况是从0开始的int
//m枚举是一种类型，编译时会进行类型检查。
//宏是替换原则，没有任何检查

enum color {
	RED=100,
	BLUE,
	BLACK=1,
	YELLOW
};
union _un {
	double a;
	char b;
};
union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};
//联合的大小至少是最大成员的大小。
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。
int main()
{



	//int num = 0;
	//scanf("%d", &num);
	//int arr[num] = { 0 };
	////代码2
	//int* ptr = NULL;
	//ptr = (int*)malloc(num * sizeof(int));
	//if (NULL != ptr)//判断ptr指针是否为空
	//{
	//	int i = 0;
	//	for (i = 0; i<num; i++)
	//	{
	//		*(ptr + i) = 0；
	//	}
	//}
	//free(ptr);//释放ptr所指向的动态内存
	//ptr = NULL;//是否有必要？
	//下面输出的结果是什么？
	/*printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));*/
	/*union _un obj;
	printf("%d\n", sizeof(obj));*/

	//enum color a = YELLOW;
	/*printf("%d\n", RED);
	printf("%d\n", BLUE);
	printf("%d\n", BLACK);
	printf("%d\n", YELLOW);*/
	/*printf("%d\n", sizeof(struct A));
	printf("%d\n", sizeof(struct B));
	printf("%d\n", sizeof(struct C));*/
	system("pause");
	return 0;
}