#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{

	int *ptr = malloc(100);
	if (ptr != NULL)
	{
		//ҵ����
	}
	else
	{
		exit(EXIT_FAILURE);
	}
	//��չ����
	//����1
	ptr = realloc(ptr, 1000);//����������(�������ʧ�ܻ���Σ�)
							 //����2
	int*p = NULL;
	p = realloc(ptr, 1000);
	if (p != NULL)
	{
		ptr = p;
	}
	//ҵ����
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