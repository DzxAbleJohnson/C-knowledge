#include <stdio.h>
#include <conio.h>
int main(void)
{
#if 0
	char n;
	printf("������һ��������ѡ��y/n:");
	n = getch();
	if('y' == n || 'Y' == n)
	{
		printf("������һ��y!!");
	}
	else
	{
		printf("����");
	}
#elif 0

	char ch1, ch2;
 
	ch1 = getchar();
	ch2 = getchar();
	printf("%d %d\n", ch1, ch2);
	return 0;
#elif 1
	char str1[20], str2[20];
	scanf("%s",str1); 
	printf("%s\n",str1);    
	scanf("%s",str2); 
	printf("%s\n",str2); 
	return 0;
#endif
}
