#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	FILE *src = fopen("3.jpg", "rb");
	if (src == NULL)
	{
		perror("fopen");
		return 1;
	}

	FILE  *dst = fopen("3_copy.jpg", "wb");
	if (dst == NULL)
	{
		perror("fopen");
		return 2;
	}

	char buf[1024];
	int n = 0;
	while ((n = fread(buf, 1, 1024, src)) > 0) {
		fwrite(buf, 1, n, dst);
	}

	if (feof(src))
	{
		printf("read src file end!\n");
	}





	//��������
	////1.open
	//FILE *src = fopen("3.jpg", "rb");
	//if (src == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}

	//FILE  *dst = fopen("3_copy.jpg", "wb");
	//if (dst == NULL)
	//{
	//	perror("fopen");
	//	return 2;
	//}
	////2��copy
	//fseek(src, 0, SEEK_END);//��src��Ӧ�Ķ�ȡλ�����õ����β

	//int size = ftell(src);//��ý�βƫ����������ľ����ļ��Ĵ�С����
	//rewind(src);//��src��Ӧλ�ûָ�����ʼ

	//char *file_content = (char*)malloc(size);
	//if (file_content == NULL)
	//{
	//	perror("malloc");
	//	return 3;
	//}
	//fread(file_content, size, 1, src);//���ļ��е��������ݶ�ȡ��file_content
	//fwrite(file_content, size/2, 1, dst);


	//fclose(src);
	//fclose(dst);
	//free(file_content);



	//ftellʹ��
	/*FILE *fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	printf("begin:%d\n", ftell(fp));
	fputs("hello world,hello bite!", fp);
	printf("end:%d\n", ftell(fp));

	printf("seek begin:%d\n", ftell(fp));
	fseek(fp, 0, SEEK_SET);
	fputs("HELLO", fp);
	printf("seek end:%d\n", ftell(fp));
*/


	//��ȡͼƬ
	/*FILE *src = fopen("1.jpg", "rb");
	if (src == NULL)
	{
		perror("fopen");
		return 1;
	}

	FILE  *dst = fopen("1_copy.jpg", "wb");
	if (dst == NULL)
	{
		perror("fopen");
		return 2;
	}



	char buf[10240];
	fread(buf, 1, sizeof(buf), src);
	fwrite(buf, 1, sizeof(buf), dst);*/
	
	
	
	//�Ӽ��̶� д���ļ�
	/*FILE *fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	char buffer[1024];
	fgets(buffer, 1024, stdin);
	fputs(buffer, fp);*/



	//��ȡ�ַ�
	/*FILE *fp = fopen("log.txt", "r");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	char c = 'a';
	while ((c = fgetc(fp)) != EOF) {
		printf("read:%c\n", c);
	}
	printf("%d\n", c);*/


	//д��a-z
	/*FILE *fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	char c = 'a';
	for (; c <='z'; c++)
	{
		fputs(c, fp);
	}*/

	//�ļ��򿪹ر� ֻ��׷��
	//FILE *fp = fopen("log.txt", "a+");
	//if (fp == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fputs("XZ", fp);
	////fputs("1234 0000", fp);
	//fclose(src);
	//fclose(dst);

	system("pause");
	return 0;

}