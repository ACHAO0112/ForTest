#include <stdio.h>
#include <Windows.h>

struct A {
	/*char a;
	double b;
	short c;*/
	double **a;
};
struct B {
	double b;
	char a;
	
	short c;
};

struct C {
	short c;
	char a;
	double b;
	
};

struct D {
	char a[3];
	double b;
	short *c;

};
struct E {
	double b;
	char a[3];
	
	short **c;

};
struct F {
	short c;
	char a;
	double *b[3];
	

};

//练习3
struct S3
{
	double d;
	char c;
	int i;
};

//练习4-结构体嵌套问题
struct S4
{
	char c1;
	struct S3 s3;
	double d;
};


struct S7
{
	char c1;
	int i;
	char c2;
};

struct S8
{
	char c1;
	char c2;
	int i;
};
struct S9
{
	int _a : 2;
	int _b : 5;
	int _c : 10;
	int _d : 30;
};
enum color {
	blue,
	white,
	yellow
};
int main()
{


	printf("%d\n", blue);
	printf("%d\n", white);
	printf("%d\n", yellow);


	/*printf("%d\n", sizeof(struct S7));
	printf("%d\n", sizeof(struct S8));*/

	/*printf("%d\n", sizeof(struct D));
	printf("%d\n", sizeof(struct E));
	printf("%d\n", sizeof(struct F));*/
	system("pause");
	return 0;
}