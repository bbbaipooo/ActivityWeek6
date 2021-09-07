#include<stdio.h>
int main()
{
	char str[100], * p;
	p = str;
	scanf_s("%s", str);
	while (*p != '\0')
	{
		if (*p != *(p + 1))
		{
			printf("%c", *p);
		}
		p++;
	}
	return 0;
}