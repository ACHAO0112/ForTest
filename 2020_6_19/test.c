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
//ö�����ͱ�����int������Ĭ������Ǵ�0��ʼ��int
//mö����һ�����ͣ�����ʱ��������ͼ�顣
//�����滻ԭ��û���κμ��

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
//���ϵĴ�С����������Ա�Ĵ�С��
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽������������������
int main()
{



	//int num = 0;
	//scanf("%d", &num);
	//int arr[num] = { 0 };
	////����2
	//int* ptr = NULL;
	//ptr = (int*)malloc(num * sizeof(int));
	//if (NULL != ptr)//�ж�ptrָ���Ƿ�Ϊ��
	//{
	//	int i = 0;
	//	for (i = 0; i<num; i++)
	//	{
	//		*(ptr + i) = 0��
	//	}
	//}
	//free(ptr);//�ͷ�ptr��ָ��Ķ�̬�ڴ�
	//ptr = NULL;//�Ƿ��б�Ҫ��
	//��������Ľ����ʲô��
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