#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
//������
void test()
{
	int *p = (int *)malloc(INT_MAX / 4);
	*p = 20;//���p��ֵ��NULL���ͻ�������
	free(p);
}
//�Զ�̬���ٿռ��Խ�����
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
		*(p + i) = i;//��i��10��ʱ��Խ�����
	}
	free(p);
}
//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//ֻ�жѿռ���Ҫfree
void test2()
{
	int a = 10;
	int *p = &a;
	free(p);//ok?
}
//ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
void test3()
{
	int *p = (int *)malloc(100);
	p++;
	free(p);//p����ָ��̬�ڴ����ʼλ��
}

//��ͬһ�鶯̬�ڴ����ͷ�
void test4()
{
	int *p = (int *)malloc(100);
	free(p);
	free(p);//�ظ��ͷ�
}
//��̬�����ڴ������ͷţ��ڴ�й©��
void test5()
{
	int *p = (int *)malloc(100);
	if (NULL != p)
	{
		*p = 20;
	}
}
//������1
//�ĸ�����
//1.����ֵû��Ϊ��
//2.û���ͷ�
//3.ʹ���ڼ�ᷢ���ڴ�й©
//4.p��str������ͬһ�ռ䣬�޸�pstr����Ϊ��
void GetMemory(char *p)
{
	p = (char *)malloc(100);
}
//char *str = NULL;
//GetMemory(str);
//strcpy(str, "hello world");
//printf(str);
//2
//�����ж���������ڵ��ý�����ᱻ�ͷ�
//����Ҫ�������ݿ�����ɾ��ֻ������������Ч��
//˼����1 ���������ص�ʱ������ʧЧ�������������ݱ�����
    //  2��printfҲ��һ���������ã�ҲҪ�γ��µ�ջ֡��printf��ջ֡��������GetMemory������ջ֡�ṹ���ŵ��µ�����
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
	//	//ҵ����
	//}
	//else
	//{
	//	exit(EXIT_FAILURE);
	//}
	////��չ����
	////����1
	//ptr = realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
	//						 //����2
	//int*p = NULL;
	//p = realloc(ptr, 1000);
	//if (p != NULL)
	//{
	//	ptr = p;
	//}
	//ҵ����
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


	//printf("������Ҫ��������ĸ�����");
	//int num = 0;
	//scanf("%d", &num);
	////int *ptr = (int*)malloc(num*sizeof(int));//�����ʼ��
	//int *ptr = calloc(num, sizeof(int));//���г�ʼ��
	//if (NULL == ptr)
	//{
	//	perror("malloc error!");
	//	return 1;
	//}

	//printf("������������ݣ�");
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
	////һ������Ŀռ��������Ҫ�Ŀռ�
	////������Ŀռ䣬���Ǹ��û��õģ��Ǹ�ϵͳ�����õ�
	////�ѿռ䲻֧�ּ������룬�ֲ��ͷ�
	//printf("before:%p\n", ptr);
	//free(ptr);//�ͷ�

	//�ͷŵ���ʵ��һ�ֹ�ϵ��ȥ��ָ��Ϳռ�֮��Ĺ�ϵ��
	//������Ŀռ�������ָ��Ϳռ�Ĺ�ϵ
	//����ָ�򣬵��ǲ���ʹ��
	/*printf("after:%p\n", ptr);*/
	system("pause");

	return 0;
}