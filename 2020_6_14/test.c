#include <stdio.h>
#include <Windows.h>


//不允许的定义，会循环为node开辟空间(非法自引用)
//struct Node {
//	int data;
//	struct Node node;
//};

//允许的定义
struct Node {
	int data;
	struct Node *next;
};
struct Point
{
	int x;
	int y;
}p1; //声明类型的同时定义变量p1
struct Point p2; //定义结构体变量p2
				 //初始化：定义变量的同时赋初值。

struct Stu
{
	char name[15];//名字
	int age; 
};
struct Stu s = { "zhangsan", 20 };//初始化
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{ 4,5 }, NULL }; //结构体嵌套初始化

//struct Node n2 = { 20,{ 5, 6 }, NULL };//结构体嵌套初始化


struct a {
	int a;
	char i;
	short y;
	double x;
};
struct S1
{
	char c1;
	int i;
	char c2;
	
	
};

struct S3
{
	int i;
	double d;
	char c;
	
};
struct A {
	short a;
	int b;
	double c;
	char d;
};
struct S5
{
	char c1;  //1
	int i;    //4
	char c2;//1
};
struct S6 {
	short a;  //2
	int b;    //4
	double c; //8
	char d;   //1        
};
int main()
{
	printf("%d\n", sizeof(struct S6));

	/*struct A obj;
	printf("%p\n", &obj);
	printf("%p\n", &obj.a);
	printf("%p\n", &obj.b);
	printf("%p\n", &obj.c);
	printf("%p\n", &obj.d);*/





	//printf("%d\n", sizeof(struct S3));
	//为什么存在内存对齐
	//printf("%d\n", sizeof(struct a));
	//struct Node node;




	system("pause");
	return 0;
}