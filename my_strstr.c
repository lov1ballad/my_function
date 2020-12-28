#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1&&str2);
	const char* cp = str1;
	while (*cp)
	{
		const char* s1 = cp;
		const char* s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)//*s1��*s2������һ��Ϊ'\0'��ֹͣ
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return cp;
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char* arr1 = "abcdefgh";
	char* arr2 = "cde";
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL)
	{
		printf("û���ҵ���\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}