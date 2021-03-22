#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	//文件=文件内容+文件属性
	//文件操作=文件内容操作+属性操作
	//文件名包含：文件路径+文件名主干+文件后缀
	
	FILE *fp = fopen("C:\\Users\\Dell\\Desktop\\test.text", "w");
	if (NULL == fp)
	{
		perror("fopen");
		return 1;
	}
	//int a = 10000;
	const char*str = "10000";
	fwrite(str, strlen(str), 1, fp);
	fclose(fp);

	//C程序启动的时候，由系统默认给我们打开三个文件：标准输入、标准输出、标准错误
	//对应的硬件设备分别是：键盘、显示器、显示器。
	//理论上缓冲区越大 效率越高
	//一般显示器运用的缓冲刷新方式：行缓存

	//每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息（如文件的名字，文件状态及
	//文件当前的位置等）。这些信息是保存在一个结构体变量中的。该结构体类型是有系统声明的，取名FILE.

	//fILE对应的是一个结构体指针

	system("pause");
	return 0;
}