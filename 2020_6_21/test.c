#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
//解引用
void test()
{
	int *p = (int *)malloc(INT_MAX / 4);
	*p = 20;//如果p的值是NULL，就会有问题
	free(p);
}
//对动态开辟空间的越界访问
void test1()
{
	int i = 0;
	int *p = (int *)malloc(10 * sizeof(int));
	if (NULL == p)
	{
		exit(EXIT_FAILURE);
	}
	for (i = 0; i <= 10; i++)
	{
		*(p + i) = i;//当i是10的时候越界访问
	}
	free(p);
}
//对非动态开辟内存使用free释放
//只有堆空间需要free
void test2()
{
	int a = 10;
	int *p = &a;
	free(p);//ok?
}
//使用free释放一块动态开辟内存的一部分
void test3()
{
	int *p = (int *)malloc(100);
	p++;
	free(p);//p不再指向动态内存的起始位置
}

//对同一块动态内存多次释放
void test4()
{
	int *p = (int *)malloc(100);
	free(p);
	free(p);//重复释放
}
//动态开辟内存忘记释放（内存泄漏）
void test5()
{
	int *p = (int *)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
//笔试题1
//四个问题
//1.返回值没有为空
//2.没有释放
//3.使用期间会发生内存泄漏
//4.p和str并不是同一空间，修改pstr还是为空
void GetMemory(char *p)
{
	p = (char *)malloc(100);
}
//char *str = NULL;
//GetMemory(str);
//strcpy(str, "hello world");
//printf(str);
//2
//函数中定义的数组在调用结束后会被释放
//拷贝要进行数据拷贝，删除只是设置数据无效。
//思考：1 、函数返回的时候，数据失效，并不代表数据被销毁
    //  2、printf也是一个函数调用，也要形成新的栈帧，printf的栈帧，覆盖了GetMemory函数的栈帧结构，才导致的乱码
//4
void Test(void)
{
	char *str = (char *)malloc(100);
	strcpy(str, "hello");
	free(str);
	if (str != NULL)
	{
		strcpy(str, "world");
		printf(str);
	}
}
char *GetMemory1(void)
{
	char p[] = "hello world";
	return p;
}

int main()
{
	char *str = NULL;
	str = GetMemory1();
	printf(str);




	/*test5();
	while (1);*/




	//int *ptr = malloc(100);
	//if (ptr != NULL)
	//{
	//	//业务处理
	//}
	//else
	//{
	//	exit(EXIT_FAILURE);
	//}
	////扩展容量
	////代码1
	//ptr = realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
	//						 //代码2
	//int*p = NULL;
	//p = realloc(ptr, 1000);
	//if (p != NULL)
	//{
	//	ptr = p;
	//}
	//业务处理
	//free(ptr);
	/*char *old_ptr = (char *)malloc(5);
	if (NULL == old_ptr)
	{
		perror("malloc");
		return 1;
	}
	char *new_ptr = (char *)realloc(old_ptr,10);
	if (NULL == new_ptr)
	{
		perror("realloc");
		return 2;
	}
	printf("old:%p\n", old_ptr);
	printf("new:%p\n", new_ptr);*/


	//printf("请输入要参与运算的个数：");
	//int num = 0;
	//scanf("%d", &num);
	////int *ptr = (int*)malloc(num*sizeof(int));//不会初始化
	//int *ptr = calloc(num, sizeof(int));//进行初始化
	//if (NULL == ptr)
	//{
	//	perror("malloc error!");
	//	return 1;
	//}

	//printf("请输入你的数据：");
	//for (int i = 0; i < num; i++)
	//{
	//	scanf("%d", ptr + i);
	//}
	//int sum = 0;
	//for (int i = 0; i < num; i++)
	//{
	//	sum += ptr[i];
	//}
	//printf("%d\n", sum);
	////一般申请的空间大于你需要的空间
	////多出来的空间，不是给用户用的，是给系统管理用的
	////堆空间不支持集体申请，局部释放
	//printf("before:%p\n", ptr);
	//free(ptr);//释放

	//释放的其实是一种关系，去掉指针和空间之间的关系。
	//多出来的空间描述了指针和空间的关系
	//可以指向，但是不能使用
	/*printf("after:%p\n", ptr);*/
	system("pause");

	return 0;
}