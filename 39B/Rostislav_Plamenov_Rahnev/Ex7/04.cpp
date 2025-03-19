// 4.Напишете програма, която сравнява два низа без да ползвате вградените функции
#include <iostream>

int main()
{
	char str1[100];
	char str2[100];

	int str1len = 0;
	int str2len = 0;

	fgets(str1, sizeof(str1), stdin);
	fgets(str2, sizeof(str2), stdin);

	while (str1[str1len] != '\0' )
	{
		if (str1[str1len] == '\n')
			break;

		str1len++;
	}

	while (str2[str2len] != '\0')
	{
		if (str2[str2len] == '\n')
			break;

		str2len++;
	}

	if (str1len > str2len)
		printf("%s > %s", str1, str2);
	else 
		printf("%s < %s", str1, str2);
}

