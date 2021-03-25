#include <stdio.h>
#include <Windows.h>
#define sq(x) x*x  //宏替换出现在预处理阶段 不参与运算
//sq(x)  x*x    11+1*11+1
//#define sq(x,y) (x+y     )
#define M 1000
#define ADD(x) x+M
//#define DOUBLE(x) ((x) + (x))

//#define MAX 1000;
//#define MAX 1000

#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
int main()
{
	int x = 5;
	int y = 8;
	int z = MAX(x++, y++);
	printf("x=%d y=%d z=%d\n", x, y, z);//输出的结果是什么？
	//printf("%d\n",DOUBLE(11+1));
	//printf("%d\n", ADD(10));
	//printf("%d\n", 10*sq(11,1));



    //printf("%d\n", sq(11+1));
	/*printf("%s\n", __FILE__);
	
	
	
	printf("%d\n", __LINE__);
	printf("%d\n", __DATE__);
	printf("%d\n", __TIME__);*/
	//printf("%s\n", __STDC__);
	system("pause");
	return 0;
}