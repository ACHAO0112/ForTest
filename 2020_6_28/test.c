#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	//�ļ�=�ļ�����+�ļ�����
	//�ļ�����=�ļ����ݲ���+���Բ���
	//�ļ����������ļ�·��+�ļ�������+�ļ���׺
	
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

	//C����������ʱ����ϵͳĬ�ϸ����Ǵ������ļ�����׼���롢��׼�������׼����
	//��Ӧ��Ӳ���豸�ֱ��ǣ����̡���ʾ������ʾ����
	//�����ϻ�����Խ�� Ч��Խ��
	//һ����ʾ�����õĻ���ˢ�·�ʽ���л���

	//ÿ����ʹ�õ��ļ������ڴ��п�����һ����Ӧ���ļ���Ϣ������������ļ��������Ϣ�����ļ������֣��ļ�״̬��
	//�ļ���ǰ��λ�õȣ�����Щ��Ϣ�Ǳ�����һ���ṹ������еġ��ýṹ����������ϵͳ�����ģ�ȡ��FILE.

	//fILE��Ӧ����һ���ṹ��ָ��

	system("pause");
	return 0;
}