
������:strncpy
ԭ�ͣ�char * strncpy(char *dest, char *src, size_t n); ��
���ܣ����ַ���src�����n���ַ����Ƶ��ַ�����dest��(��������strcpyһ������NULL��ֹͣ���ƣ����ǵȴչ�n���ַ��ſ�ʼ���ƣ�������ָ��dest��ָ�롣
#include <stdio.h>
#include <string.h>
int main(void)
{
char string[10];
char *str1 = "abcdefghi";
strncpy(string, str1,3);
   
printf("%s\n", string);
return 0;
}