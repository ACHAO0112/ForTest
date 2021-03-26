#include <stdio.h>
#include <windows.h>

int main()
{

#define M 1000

	printf("%d\n", M);
	printf("%d\n", M);
	printf("%d\n", M);
	printf("%d\n", M);
#undef M

	//printf("%d\n", M);
	system("pause");
	return 0;
}