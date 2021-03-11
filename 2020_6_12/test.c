#include <stdio.h>
#include <Windows.h>
#include <assert.h>
//方法1计时器方式
int my_strlen1(const char * str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
//方法2 不能创建临时变量计数器
int my_strlen2(const char * str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen2(str + 1);
}
//方法3指针-指针的方式
int my_strlen3(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}

char *my_Strcpy(char* dst, const char *src)
{
	assert(dst);
	assert(src);
	char *ret = dst;
	while (*dst != '\0')
	{
		*dst = *src;
		dst++, src++;

	}
	*dst = '\0';
	return ret;
}

//strcat
char *my_strcat(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}



//strstr
char *my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char *cp = (char*)str1;
	char *substr = (char *)str2;
	char *s1 = NULL;
	if (*str2 == '\0')
		return NULL;
	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
			
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}


//strcmp
int my_strcmp(const char * src, const char * dst)
{
	int ret = 0;
	assert(src != NULL);
	assert(dst != NULL);
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
		++src, ++dst;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return(ret);
}



//memcpy
void * memcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	assert(dst);
	assert(src);
	/*
	* copy from lower addresses to higher addresses
	*/
	while (count--) {
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}
	return(ret);
}


//memmove
void * memmove(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	if (dst <= src || (char *)dst >= ((char *)src + count)) {
		/*
		* Non-Overlapping Buffers
		* copy from lower addresses to higher addresses
		*/
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst + 1;
			src = (char *)src + 1;
		}
	}
	else {
		/*
		* Overlapping Buffers
		* copy from higher addresses to lower addresses
		*/
		dst = (char *)dst + count - 1;
		src = (char *)src + count - 1;
		while (count--) {
			*(char *)dst = *(char *)src;
			dst = (char *)dst - 1;
			src = (char *)src - 1;
		}
	}
	return(ret);
}
int main()
{
	//模拟实现strcpy
	const char *src = "hello world";
	char dst[16];

	my_Strcpy(dst, src);



	//模拟实现strlen
	/*const char *str = "hello world";
	printf("%d\n", my_strlen3(str));*/



	//memmove
	//char buffer1[] = "DWgaOtP12df0";
	//char buffer2[] = "DWGAOTP12DF0";
	//int n;
	//n = memcmp(buffer1, buffer2, sizeof(buffer1));//比较
	//if (n>0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);
	//else if (n<0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);
	//else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);


	/*char str[] = "memmove can be very useful......";
	memmove(str + 20, str + 15, 11);
	puts(str);*/





	system("pause");
	return 0;
}