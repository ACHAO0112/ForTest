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





	//拷贝尝试
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
	////2、copy
	//fseek(src, 0, SEEK_END);//将src对应的读取位置设置到最结尾

	//int size = ftell(src);//获得结尾偏移量，代表的就是文件的大小！！
	//rewind(src);//将src对应位置恢复到开始

	//char *file_content = (char*)malloc(size);
	//if (file_content == NULL)
	//{
	//	perror("malloc");
	//	return 3;
	//}
	//fread(file_content, size, 1, src);//将文件中的所有内容读取到file_content
	//fwrite(file_content, size/2, 1, dst);


	//fclose(src);
	//fclose(dst);
	//free(file_content);



	//ftell使用
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


	//读取图片
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
	
	
	
	//从键盘读 写入文件
	/*FILE *fp = fopen("log.txt", "w");
	if (fp == NULL)
	{
		perror("fopen");
		return 1;
	}
	char buffer[1024];
	fgets(buffer, 1024, stdin);
	fputs(buffer, fp);*/



	//读取字符
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


	//写入a-z
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

	//文件打开关闭 只读追加
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