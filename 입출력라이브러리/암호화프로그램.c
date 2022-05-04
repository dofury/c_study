#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void encrypt(char[], int);
int main()
{
	char str[100];
	int shift = 3;
	puts("암호화할 문자열을 입력해주세요: ");
	gets_s(str, 100);
	encrypt(str, shift);
	puts("암호화된 문자열: ");
	puts(str);
	return 0;
}
void encrypt(char str[], int shift)
{
	int length = strlen(str);
	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] > ('z' - shift))
				str[i] = str[i] - (26 - shift);
			else
				str[i] = str[i] + shift;
		}
	}

}
