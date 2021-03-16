#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{

	int *ptr = malloc(100);
	if (ptr != NULL)
	{
		//业务处理
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	//扩展容量
	//代码1
	ptr = realloc(ptr, 1000);//这样可以吗？(如果申请失败会如何？)
							 //代码2
	int*p = NULL;
	p = realloc(ptr, 1000);
	if (p != NULL)
	{
		ptr = p;
	}
	//业务处理
	free(ptr);
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