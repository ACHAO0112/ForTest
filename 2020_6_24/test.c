#include <stdio.h>
#include <Windows.h>
#include <assert.h>


//struct A {
//	
//	int a;
//	char b;
//	char c[0];
//	//1、在struct内
//	//2、一定是最后一个元素
//	//3、元素个数为0 
//};
struct A {
	int num;
	char arr[0];
};
//柔性数组的存在价值
//1、能够帮程序员实现一个结构体内的变长数组。
//2、简单
//code1
//typedef struct st_type
//{
//	int i;
//	int a[0];//柔性数组成员
//}type_a;

//代码2
typedef struct st_type1
{
	int i;
	int *p_a;
}type_a;
//1
//int my_atoi(const char *str)
//{
//	assert(str);
//
//	int result = 0;
//	while (*str)
//	{
//		result = result * 10 + *str - '0';
//		str++;
//	}
//	return result;
//
//}
//2
int status = 0;
int my_atoi(const char *str)
{
	assert(str);
	int flag = 1;
	long long result = 0;
	int i = 0;
	while (isspace(str[i])) {
		i++;
	}
	if (str[i] == '-')
	{
		flag = -flag;
		i++;
	}
	while (str[i]) {
		if (isdigit(str[i])) {
			result = result * 10+str[i]-'0';
			if (result > INT_MAX || result < INT_MIN) {
				status = 1;
				break;
			}
		}
		else
		{
			status = 2;
			break;
		}
		i++;
	}
	
	return (int)result;
}
int main()
{
	//模拟实现atoi
	const char *str = "-12345";

	int res = my_atoi(str);

	printf("status: %d,result: %d\n", status, res);






	//type_a *p = malloc(sizeof(type_a));
	//p->i = 100;
	//p->p_a = (int *)malloc(p->i * sizeof(int));
	////业务处理
	//for (int i = 0; i<100; i++)
	//{
	//	p->p_a[i] = i;
	//}
	////释放空间
	//free(p->p_a);
	//p->p_a = NULL;
	//free(p);
	//p = NULL;


	////代码1
	//int i = 0;
	//type_a *p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
	////业务处理
	//p->i = 100;
	//for (i = 0; i<100; i++)
	//{
	//	p->a[i] = i;
	//}
	//free(p);

	/*struct A *p = malloc(sizeof(struct A) + 100 * sizeof(char));
	p->num = 100;
	for (int i = 0; i < p->num; i++)
	{
		p->arr[i] = i;
	}
	free(p);*/



	system("pause");
	return 0;
}