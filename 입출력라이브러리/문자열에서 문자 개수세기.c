#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>


int main()
{
	char str[100];
	char ch;
	int count=0;

	printf("문자열을 입력해주세요: ");
	gets_s(str,sizeof(str));
	printf("개수를 셀 문자를 입력해주세요: ");
	ch = getchar();
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ch)
			count++;
	}
	printf("%c의 개수: %d\n", ch, count);
	return 0;
}
