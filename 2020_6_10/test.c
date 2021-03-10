#include <stdio.h>
#include<Windows.h>
#include <errno.h>
#pragma warning(disable:4996)
int main()
{

	//
	char str[] = "This Is A Pig";
	int len = strlen(str);
	for (int i = 0; i< len; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}
	printf("%s\n", str);



	//strerror 
	/*printf("errno:%d\n", errno);
	FILE *fp = fopen("test.txt", "r");
	if (fp == NULL)
	{
		printf("error:%d\n", errno);
		printf("error reason : %s\n ", strerror(errno));
	}*/





	//strtok
	//char *p = "zhangpengwei@bitedu.tech";
	//const char* sep = ".@";
	//char arr[30];
	//char *str = NULL;
	//strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
	//for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	//{
	//	printf("%s\n", str);
	//}
	//
	/*char str[] = "- This, a sample string.";
	char * pch;
	printf("Splitting string \"%s\" into tokens:\n", str);
	pch = strtok(str, " ,.-");
	while (pch != NULL)
	{
		printf("%s\n", pch);
		pch = strtok(NULL, " ,.-");
	}*/



	//strstr
	/*char str[] = "This is a simple string";
	char * pch;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 6);
	puts(str);*/





	//strncmp
	/*char str[][5] = { "R2D2" , "C3PO" , "R2A6" };
	int n;
	puts("Looking for R2 astromech droids...");
	for (n = 0; n<3; n++)
		if (strncmp(str[n], "R2xx", 2) == 0)
		{
			printf("found %s\n", str[n]);
		}*/



	/*const char *src = "abcdefg";
	char dst[16] = "123456";
	strncpy(dst, src, 4);*/

	/*char string[] = "Hello world!";
	puts(string);*/
	/*const char *src = "abcdefg";
	puts(src);*/
	/* printf example */

	//char string[256];
	//printf("Insert your full address: ");
	//gets(string);     // warning: unsafe (see fgets instead)
	//printf("Your address is: %s\n", string);
	

	system("pause");
	return 0;
}