#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
void Swap(int *xp, int *yp)
{
	/*int temp = *xp;
	*xp = *yp;
	*yp = temp;*/
	*xp ^= *yp;
	*yp ^= *xp;
	*xp ^= *yp;

}

int CountOne(int x)
{
	//code 3
	int count = 0;
	while (x) {
		x &= (x - 1);
		count++;
	}
	return count;
}



	////code 2
	//int count = 0;
	//while (x){
	//	if (x % 2){
	//		count++;
	//	}
	//	x /= 2;
	//}
	//return count;
void test1(int arr[]){
	printf("%d\n", sizeof(arr));
}
void test2(char ch[]){
	printf("%d\n", sizeof(ch));
}




	////code 1
	//int count = 0;
	//int i = 0;
	//while (i<sizeof(x)*8){
	//	if (x & (1<<i)){
	//		count++;
	//	}
	//	i++;
	//}
	//return count;

typedef struct Stu
{
	char name[32];
	int age;
	char sex;
	char score[16];
}stu_t;
void Show(stu_t s)
{
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%c\n", s.sex);
	printf("%s\n", s.score);
}
int main()
{
	struct Stu student1 = { "张三", 18, 'm', "123456" };
	Show(student1);
	/*struct Stu student1 = { "张三", 18, 'm', "123456" };
	struct Stu student2 = { "李四", 21, 'm', "123456" };
	printf("name:%s\n", student1.name);*/

	/*int a = 10;
	int b = 20;
	int max = 0;
	max = a < b ? a++ : b++;
	printf("%d %d\n", max, a);*/
	/*int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);*/



	//int x = -1;
	//int num = CountOne(x);
	//printf("1的个数： %d\n",num);















	/*int x = 0;
	int y = 0;
	printf("请输入你的数字：");
	scanf("%d %d", &x, &y);
	printf("%d %d\n", x, y);
	Swap(&x,&y);
	printf("%d %d\n", x,y);*/


	//printf("hello world\n");
	system("pause");
	return 0;
}